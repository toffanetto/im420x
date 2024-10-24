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

// Control signal struct with low level control signal from TaskControle to MicroAutoware,
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

  unsigned int uiX0   = 33970;
  unsigned int uiXMin = 1057;
  unsigned int uiXMax = 65535;
  unsigned int uiY0   = 33580;
  unsigned int uiYMin = 1062;
  unsigned int uiYMax = 65535;

  unsigned int uiFlags;

  float fJoyXAxis;
  float fJoyYAxis;
  float fTrottle;
  float fBrake;
  float fSteeringAngle;


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

      fTrottle = (fJoyYAxis > 0) ? fJoyYAxis*MAX_TROTTLE : 0;
      fBrake = (fJoyYAxis < 0) ? fJoyYAxis*MAX_BRAKE : 0;
      fSteeringAngle = fJoyXAxis*MAX_STEERING_ANGLE;

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
