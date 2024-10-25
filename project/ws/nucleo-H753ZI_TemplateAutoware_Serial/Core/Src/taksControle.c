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

/**
  * @name   StartTaskControle
  * @brief  TaskControle task function.
  * @param  argument: not used.
  * @retval None
  */
void StartTaskControle(void *argument)
{

  unsigned char ucControlMode;
  unsigned char ucFlagFullMsg;

  unsigned char ucSmState = 0;

  unsigned int uiX0   = 33970;
  unsigned int uiXMin = 1057;
  unsigned int uiXMax = 65535;
  unsigned int uiY0   = 33580;
  unsigned int uiYMin = 1062;
  unsigned int uiYMax = 65535;

  unsigned int uiFlags;

  float fJoyXAxis;
  float fJoyYAxis;

  unsigned char * cTxMsgToCarla;

  vehicle_status xVehicleStatus;

  unsigned char cDmaBuffer[UART2_DMA_BUFFER_SIZE]; // TODO Ajustar o buffer pro tamanho da mensagem, manter a mais nova
  struct uxrCustomTransport xUart2DmaTransport;

  xUart2DmaTransport.args = &huart2;

  HAL_UART_Receive_DMA(&huart2, cDmaBuffer, UART2_DMA_BUFFER_SIZE);

  ucControlMode = AUTOWARE;

  for(;;)
  {

	uiFlags = osThreadFlagsWait(0x11, osFlagsWaitAny, 0);

	if(0x01 == uiFlags)
	{
	  ucControlMode = AUTOWARE;
	  uiFlags = 0;
	}

	if(0x10 == uiFlags)
	{
	  ucControlMode = MANUAL;
	  uiFlags = 0;
	}

	uiFlags = osThreadFlagsWait(0x1000, osFlagsWaitAll, 0);

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
	  uiFlags = 0;
	}

	if(AUTOWARE == ucControlMode)
	{
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
	    cTxMsgToCarla = cGetStringFromControlAction(xControlAction);
	    osMutexRelease(MutexControlActionHandle);

	    // Send cTxMsgToCarla to CARLA
	    cubemx_transport_write(&xUart2DmaTransport, cTxMsgToCarla, strlen((char * ) cTxMsgToCarla), 0);

	    // Recieve data from CARLA
	    do{
		  // Read xVehicleStatus
		  cubemx_transport_read(&xUart2DmaTransport, cDmaBuffer, UART2_DMA_BUFFER_SIZE, 1, 0); // Using timeout = 1 tick.

		  ucFlagFullMsg = ucGetVehicleStatusFromString(&xVehicleStatus, cDmaBuffer, &ucSmState);

	    } while(!ucFlagFullMsg); //NAO_ENCONTRAR_O_$ -> Precisa da mensagem inteira

	    osMutexAcquire(MutexControlSignalHandle, osWaitForever);
	    //xControlSignal
	    osMutexRelease(MutexControlSignalHandle);

	    osThreadFlagsSet(TaskMicroAutowaHandle, 0x100);
	  }
	}

    if(MANUAL == ucControlMode)
    {
      // Joystick read block -- START
      fJoyXAxis = fGetJoyPostition((unsigned int) uiADC1Buffer[0], uiX0, uiXMax, uiXMin);
      fJoyYAxis = fGetJoyPostition((unsigned int) uiADC1Buffer[1], uiY0, uiYMax, uiYMin);

      osMutexAcquire(MutexControlActionHandle, osWaitForever);
      xControlAction.fTrottle = (fJoyYAxis > 0) ? fJoyYAxis*MAX_TROTTLE : 0;
      xControlAction.fBrake = (fJoyYAxis < 0) ? fJoyYAxis*MAX_BRAKE : 0;
      xControlAction.fSteeringAngle = fJoyXAxis*MAX_STEERING_ANGLE;
      xControlAction.ucManualGearShift = 0;
      xControlAction.ucHandBrake = 0;
      xControlAction.ucReverse = 0;
      xControlAction.ucControlMode = MANUAL;
      xControlAction.ucGear = 1;

      cTxMsgToCarla = cGetStringFromControlAction(xControlAction);

	  osMutexRelease(MutexControlActionHandle);

	  // Send cTxMsgToCarla to CARLA
	  cubemx_transport_write(&xUart2DmaTransport, cTxMsgToCarla, strlen((char * ) cTxMsgToCarla), 0);


	  // Recieve data from CARLA


      // Empacota xControlSignal
      
      osMutexAcquire(MutexControlSignalHandle, osWaitForever);
      // xControlSignal
      osMutexRelease(MutexControlSignalHandle);

      osThreadFlagsSet(TaskMicroAutowaHandle, 0x100);

      // WAIT
      osDelay(20);
    }

    // Joystick read block -- END

  }


}
