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
extern unsigned char ucDmaBuffer[UART2_DMA_BUFFER_SIZE]; // TODO Ajustar o buffer pro tamanho da mensagem, manter a mais nova


/**
  * @name   StartTaskControle
  * @brief  TaskControle task function.
  * @param  argument: not used.
  * @retval None
  */
void StartTaskControle(void *argument)
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
  ucControlMode = MANUAL; // ! MANUAL for testing joy + UART

  // Task loop
  for(;;)
  {
    // Looking fot operation mode change by Autoware -- START
    uiFlags = osThreadFlagsWait(0x11, osFlagsWaitAny, 0);

    if(0x01 == uiFlags)
    {
      ucControlMode = AUTOWARE;
    }

    if(0x10 == uiFlags)
    {
      ucControlMode = MANUAL;
    }
    // Looking for operation mode change by Autoware -- END

    // Looking for operation mode change by JoySW -- START
    uiFlags = osThreadFlagsWait(0x1000, osFlagsWaitAll, 0); // ! 0x1000 flag has been overried by previous osThreadFlagWait

    if(0x1000 == uiFlags)
    {
      if(AUTOWARE == ucControlMode)
      {
      ucControlMode = MANUAL;
      osThreadFlagsSet(TaskMicroAutowaHandle, 0x10);
      }
      else if(MANUAL == ucControlMode)
      {
      ucControlMode = AUTOWARE;
      osThreadFlagsSet(TaskMicroAutowaHandle, 0x01);
      }
    }
    // Looking for operation mode change by JoySW -- END

    // Autonomous mode (AUTOWARE) routine -- START
    if(AUTOWARE == ucControlMode)
    {
      // Setting driving mode lights
      HAL_GPIO_WritePin(LD2_GPIO_Port,LD2_Pin, 1);
      HAL_GPIO_WritePin(LD1_GPIO_Port,LD3_Pin, 0);

      // WAIT for flag to sync xControlAction update
      uiFlags = osThreadFlagsWait(0x100, osFlagsWaitAll, TIMEOUT_GET_CONTROL_ACTION);

      // Timeout error
      if(osFlagsErrorTimeout == uiFlags)
      {
      // Deu ruim timeout
      }

      if(0x100 == uiFlags)
      {
        osMutexAcquire(MutexControlActionHandle, osWaitForever);
        vGetStringFromControlAction(xControlAction, ucTxMsgToCarla);
        osMutexRelease(MutexControlActionHandle);

        // Send cTxMsgToCarla to CARLA
        HAL_UART_Transmit_DMA(&huart2, ucTxMsgToCarla, strlen((char * ) ucTxMsgToCarla));

        // Recieve data from CARLA

        osMutexAcquire(MutexControlSignalHandle, osWaitForever);
        xControlSignal.fThrottle = xControlAction.fTrottle;
        xControlSignal.fBrake = xControlAction.fBrake;
        xControlSignal.fSteeringAngle = xControlAction.fSteeringAngle;
        xControlSignal.ucManualGearShift = xControlAction.ucManualGearShift;
        xControlSignal.ucHandBrake = xControlAction.ucHandBrake;
        xControlSignal.ucReverse = xControlAction.ucReverse;
        xControlSignal.ucControlMode = AUTOWARE;
        xControlSignal.ucGear = xVehicleStatus.ucGear;
        xControlSignal.fLongSpeed = xVehicleStatus.xLongSpeed.fFloat;
        xControlSignal.fLatSpeed = xVehicleStatus.xLatSpeed.fFloat;
        xControlSignal.fHeadingRate = xVehicleStatus.xHeadingRate.fFloat;
        osMutexRelease(MutexControlSignalHandle);

        osThreadFlagsSet(TaskMicroAutowaHandle, 0x100);
      }
    }
    // Autonomous mode (AUTOWARE) routine -- END


    // Manual mode (MANUAL) routine -- START
    if(MANUAL == ucControlMode)
    {
      // Setting driving mode lights
      HAL_GPIO_WritePin(LD2_GPIO_Port,LD2_Pin, 0);
      HAL_GPIO_WritePin(LD1_GPIO_Port,LD3_Pin, 1);

      // Joystick read block -- START
      fJoyXAxis = fGetJoyPostition((unsigned int) uiADC1Buffer[0], uiX0, uiXMax, uiXMin);
      fJoyYAxis = fGetJoyPostition((unsigned int) uiADC1Buffer[1], uiY0, uiYMax, uiYMin);

      osMutexAcquire(MutexControlActionHandle, osWaitForever);
      xControlAction.fTrottle = (fJoyYAxis > 0) ? fJoyYAxis*MAX_TROTTLE : 0.0;
      xControlAction.fBrake = (fJoyYAxis < 0) ? -fJoyYAxis*MAX_BRAKE : 0.0;
      xControlAction.fSteeringAngle = fJoyXAxis*MAX_STEERING_ANGLE;
      xControlAction.ucManualGearShift = 1;
      xControlAction.ucHandBrake = 2;
      xControlAction.ucReverse = 3;
      xControlAction.ucControlMode = MANUAL;
      xControlAction.ucGear = 4;

      vGetStringFromControlAction(xControlAction, ucTxMsgToCarla);

      osMutexRelease(MutexControlActionHandle);

      // Send cTxMsgToCarla to CARLA
      if(huart2.gState == HAL_UART_STATE_READY)
      {
      HAL_UART_Transmit_DMA(&huart2, ucTxMsgToCarla, MSG_TO_CARLA_SIZE);
      }

      // Wait CARLA full msg xVehicleStatusRx
      uiFlags = osThreadFlagsWait(0x10000, osFlagsWaitAll, TIMEOUT_GET_CARLA_RX);

      // Timeout error
      if(osFlagsErrorTimeout == uiFlags)
      {
      // Deu ruim timeout
      }
      uiFlags = 0;

      // Empacota xControlSignal

      osMutexAcquire(MutexControlSignalHandle, osWaitForever);
      xControlSignal.fThrottle = xControlAction.fTrottle;
      xControlSignal.fBrake = xControlAction.fBrake;
      xControlSignal.fSteeringAngle = xControlAction.fSteeringAngle;
      xControlSignal.ucManualGearShift = xControlAction.ucManualGearShift;
      xControlSignal.ucHandBrake = xControlAction.ucHandBrake;
      xControlSignal.ucReverse = xControlAction.ucReverse;
      xControlSignal.ucControlMode = MANUAL;
      xControlSignal.ucGear = xVehicleStatus.ucGear;
      xControlSignal.fLongSpeed = xVehicleStatus.xLongSpeed.fFloat;
      xControlSignal.fLatSpeed = xVehicleStatus.xLatSpeed.fFloat;
      xControlSignal.fHeadingRate = xVehicleStatus.xHeadingRate.fFloat;
      osMutexRelease(MutexControlSignalHandle);

      osThreadFlagsSet(TaskMicroAutowaHandle, 0x100);

      // WAIT
      osDelay(200);
    }
    // Manual mode (MANUAL) routine -- END

  }


}
