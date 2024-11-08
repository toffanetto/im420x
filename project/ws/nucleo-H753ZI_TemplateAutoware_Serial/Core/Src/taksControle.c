/**
  ******************************************************************************
  * @file    taskControle.h
  * @brief   This file contains the declarations for the FreeRTOS task 
  *          taskControle, which make a control of a autonomous vehicle by the
  *          high level control action given by Autoware or manualy controled by
  *          a physical joysitck.
  ******************************************************************************
  * @author  Gabriel Toffanetto França da Rocha 
  *          Laboratory of Autonomous Vehicles (LMA) - FEM/Unicamp
  * @date    Created:  October 21, 2024
  *          Modified: 
  ******************************************************************************
  */
#include "taskControle.h"

extern unsigned int uiADC1Buffer[2];

extern osMutexId_t MutexControlActionHandle;
extern osMutexId_t MutexControlSignalHandle;
extern osThreadId_t TaskMicroAutowaHandle;


// Control action struct with high level control action from MicroAutoware to TaskControle,
// for compute the vehicle control action. [From freertos.c].
extern control_action xControlAction;

// Control signal struct with low level control signal from TaskControle to CARLA,
// for publish in simulator topics by micro-ros. [From freertos.c].
extern control_signal xControlSignal;

// Data structure for data received from CARLA by UART2
extern vehicle_status xVehicleStatus;

// Buffer for data received from CARLA by UART2
extern unsigned char ucDmaBuffer[UART2_DMA_BUFFER_SIZE];


/**
  * @name   StartTaskControle
  * @brief  TaskControle task function.
  * @param  argument: not used.
  * @retval None
  */
void StartTaskControle(void * argument)
{

  // Local variables -- START
  unsigned char ucControlMode;
  unsigned char ucFlagFullMsg;

  // Joystick calibration
  unsigned int uiX0   = 33970;
  unsigned int uiXMin = 1057;
  unsigned int uiXMax = 65535;
  unsigned int uiY0   = 33580;
  unsigned int uiYMin = 1062;
  unsigned int uiYMax = 65535;

  // Return flags
  unsigned int uiFlags = 0;

  // Joystick reading
  float fJoyXAxis;
  float fJoyYAxis;

  // Message buffer to CARLA by UART2
  unsigned char ucTxMsgToCarla[MSG_TO_CARLA_SIZE];

  // Local variables -- END

  // Initialization of DMA RX in circular mode
  HAL_UART_Receive_DMA(&huart2, ucDmaBuffer, UART2_DMA_BUFFER_SIZE);

  // Initialization of operation mode
  ucControlMode = MANUAL; // ! MANUAL to test communication with carla
  osThreadFlagsSet(TaskMicroAutowaHandle, TO_MANUAL_MODE_FLAG);

  
  //uiFlags = osThreadFlagsGet();
  //uiFlags = osThreadFlagsWait(MICRO_ROS_AGENT_ONLINE_FLAG, osFlagsWaitAny, 1000 * 20); // Wait 20 seconds for uROS init

  if(osFlagsErrorTimeout == uiFlags)
  {
    ucControlMode = MANUAL;
  }

  // Task loop
  for(;;)
  {

    // Looking fot operation mode change by Autoware -- START
	uiFlags = osThreadFlagsGet();
    uiFlags = osThreadFlagsWait(TO_AUTOWARE_MODE_FLAG | TO_MANUAL_MODE_FLAG, osFlagsWaitAny, 0);

    if(TO_AUTOWARE_MODE_FLAG == uiFlags)
    {
      ucControlMode = AUTOWARE;
    }
    else if(TO_MANUAL_MODE_FLAG == uiFlags)
    {
      ucControlMode = MANUAL;
    }
    else if((TO_AUTOWARE_MODE_FLAG | TO_MANUAL_MODE_FLAG) == uiFlags)
    {
      ucControlMode = MANUAL;
    }
    // Looking for operation mode change by Autoware -- END

    // Looking for operation mode change by JoySW -- START
    uiFlags = osThreadFlagsGet();
    uiFlags = osThreadFlagsWait(JOYSW_FLAG, osFlagsWaitAll, 0);

    if(JOYSW_FLAG == uiFlags)
    {
      if(AUTOWARE == ucControlMode)
      {
        ucControlMode = MANUAL;
        osThreadFlagsSet(TaskMicroAutowaHandle, TO_MANUAL_MODE_FLAG);
      }
      else if(MANUAL == ucControlMode)
      {
        ucControlMode = AUTOWARE;
        osThreadFlagsSet(TaskMicroAutowaHandle, TO_AUTOWARE_MODE_FLAG);
      }
    }
    // Looking for operation mode change by JoySW -- END

    // Autonomous mode (AUTOWARE) routine -- START
    if(AUTOWARE == ucControlMode)
    {
      // Setting driving mode lights
	    vDrivingModeLights(ucControlMode);

      // WAIT for flag to sync xControlAction update
  	  uiFlags = osThreadFlagsGet();
      uiFlags = osThreadFlagsWait(DATA_UPDATED_FLAG, osFlagsWaitAll, TIMEOUT_GET_CONTROL_ACTION);

      // Timeout error
      if(osFlagsErrorTimeout == uiFlags)
      {
        ucControlMode = MANUAL;
        osThreadFlagsSet(TaskMicroAutowaHandle, TO_MANUAL_MODE_FLAG);
      }

      if(DATA_UPDATED_FLAG == uiFlags)
      {
        osMutexAcquire(MutexControlActionHandle, osWaitForever);
        vGetStringFromControlAction(xControlAction, ucTxMsgToCarla);
        osMutexRelease(MutexControlActionHandle);

        // Send cTxMsgToCarla to CARLA
        HAL_UART_Transmit_DMA(&huart2, ucTxMsgToCarla, MSG_TO_CARLA_SIZE);

        // Wait CARLA full msg xVehicleStatusRx
        uiFlags = osThreadFlagsGet();
        uiFlags = osThreadFlagsWait(UART_NEW_DATA_FLAG, osFlagsWaitAll, TIMEOUT_GET_CARLA_RX);

        // Timeout error
        if(osFlagsErrorTimeout == uiFlags)
        {
          ucControlMode = EMERGENCY;
        }

        osMutexAcquire(MutexControlSignalHandle, osWaitForever);

        xControlSignal.fLongSpeed = xVehicleStatus.xLongSpeed.fFloat;
        xControlSignal.fLatSpeed = xVehicleStatus.xLatSpeed.fFloat;
        xControlSignal.fHeadingRate = xVehicleStatus.xHeadingRate.fFloat;
        xControlSignal.fSteeringStatus = xVehicleStatus.xSteeringStatus.fFloat;

        osMutexRelease(MutexControlSignalHandle);

        osThreadFlagsSet(TaskMicroAutowaHandle, DATA_UPDATED_FLAG);
      }
    }
    // Autonomous mode (AUTOWARE) routine -- END


    // Manual mode (MANUAL) routine -- START
    if(MANUAL == ucControlMode)
    {
      // Setting driving mode lights
  	  vDrivingModeLights(ucControlMode);

      // Joystick read block -- START
      fJoyXAxis = fGetJoyPostition((unsigned int) uiADC1Buffer[0], uiX0, uiXMax, uiXMin);
      fJoyYAxis = fGetJoyPostition((unsigned int) uiADC1Buffer[1], uiY0, uiYMax, uiYMin);

      // Assembling xControlAction
      osMutexAcquire(MutexControlActionHandle, osWaitForever);
      xControlAction.xSteeringAngle.fFloat = -fJoyXAxis*MAX_STEERING_ANGLE;
      xControlAction.xSteeringVelocity.fFloat = 0;
      xControlAction.xSpeed.fFloat = (fJoyYAxis > 0) ? fJoyYAxis*MAX_TROTTLE : 0.0;
      xControlAction.xAcceleration.fFloat = (fJoyYAxis < 0) ? -fJoyYAxis*MAX_BRAKE : 0.0;
      xControlAction.xJerk.fFloat = 0;
      xControlAction.ucControlMode = MANUAL;
      vGetStringFromControlAction(xControlAction, ucTxMsgToCarla);

      osMutexRelease(MutexControlActionHandle);

      // Send cTxMsgToCarla to CARLA
      HAL_UART_Transmit_DMA(&huart2, ucTxMsgToCarla, MSG_TO_CARLA_SIZE);

      // Wait CARLA full msg xVehicleStatusRx
  	  uiFlags = osThreadFlagsGet();
      uiFlags = osThreadFlagsWait(UART_NEW_DATA_FLAG, osFlagsWaitAll, TIMEOUT_GET_CARLA_RX);

      // Timeout error
      if(osFlagsErrorTimeout == uiFlags)
      {
        //ucControlMode = EMERGENCY;
      }

      // Assembling xControlSignal
      osMutexAcquire(MutexControlSignalHandle, osWaitForever);

      xControlSignal.fLongSpeed = xVehicleStatus.xLongSpeed.fFloat;
      xControlSignal.fLatSpeed = xVehicleStatus.xLatSpeed.fFloat;
      xControlSignal.fHeadingRate = xVehicleStatus.xHeadingRate.fFloat;
      xControlSignal.fSteeringStatus = xVehicleStatus.xSteeringStatus.fFloat;

      osMutexRelease(MutexControlSignalHandle);

      osThreadFlagsSet(TaskMicroAutowaHandle, DATA_UPDATED_FLAG);

      // WAIT
      osDelay(MANUAL_CONTROL_TIME_COMMAND);
    }
    // Manual mode (MANUAL) routine -- END

    // Emergency mode (EMERGENCY) routine -- START
    if(EMERGENCY == ucControlMode)
    {
      // Setting driving mode lights
  	  vDrivingModeLights(ucControlMode);
    
      osMutexAcquire(MutexControlActionHandle, osWaitForever);

      xControlAction.xSteeringAngle.fFloat = 0;
      xControlAction.xSteeringVelocity.fFloat = 0;
      xControlAction.xSpeed.fFloat = 0;
      xControlAction.xAcceleration.fFloat = 0;
      xControlAction.xJerk.fFloat = 0;
      xControlAction.ucControlMode = EMERGENCY;
      vGetStringFromControlAction(xControlAction, ucTxMsgToCarla);

      // Try to stop the car whatever it takes
      while(1)
      {

        HAL_UART_Transmit_DMA(&huart2, ucTxMsgToCarla, MSG_TO_CARLA_SIZE);

        HAL_Delay(MANUAL_CONTROL_TIME_COMMAND);

      }
      
    }
    // Emergency mode (EMERGENCY) routine -- END

  }


}
