/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    freertos.c
  * @brief   Base code for FreeRTOS applcation. Declaration of tasks, global
  *          variables, kernel objects, typedefs and project libraries.
  ******************************************************************************
  * @author  Gabriel Toffanetto França da Rocha 
  *          Laboratory of Autonomous Vehicles (LMA) - FEM/Unicamp
  * @date    Created:  October 9, 2024
  *          Modified: 
  ******************************************************************************
  */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "FreeRTOS.h"
#include "task.h"
#include "main.h"
#include "cmsis_os.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

// Tasks includes -- START
#include "taskControle.h"
#include "microAutoware.h"

// Tasks includes -- END

// Libraries includes -- START
#include "light_printf.h"
#include "utils.h"

// Libraries includes -- END

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
/* USER CODE BEGIN Variables */

extern unsigned char ucButtonState;

// Control action struct with high level control action from MicroAutoware to TaskControle,
// for compute the vehicle control action.
control_action xControlAction;

// Control signal struct with low level control signal from TaskControle to MicroAutoware,
// for publish in simulator topics by micro-ros.
control_signal xControlSignal;


vehicle_status xVehicleStatusRx;


unsigned int ucSmState = 0;

/* USER CODE END Variables */
/* Definitions for TaskControle */
osThreadId_t TaskControleHandle;
const osThreadAttr_t TaskControle_attributes = {
  .name = "TaskControle",
  .stack_size = 500 * 4,
  .priority = (osPriority_t) osPriorityAboveNormal,
};
/* Definitions for TaskMicroAutowa */
osThreadId_t TaskMicroAutowaHandle;
const osThreadAttr_t TaskMicroAutowa_attributes = {
  .name = "TaskMicroAutowa",
  .stack_size = 3500 * 4,
  .priority = (osPriority_t) osPriorityNormal,
};
/* Definitions for MutexControlSignal */
osMutexId_t MutexControlSignalHandle;
const osMutexAttr_t MutexControlSignal_attributes = {
  .name = "MutexControlSignal"
};
/* Definitions for MutexControlAction */
osMutexId_t MutexControlActionHandle;
const osMutexAttr_t MutexControlAction_attributes = {
  .name = "MutexControlAction"
};

/* Private function prototypes -----------------------------------------------*/
/* USER CODE BEGIN FunctionPrototypes */



/* USER CODE END FunctionPrototypes */

void StartTaskControle(void *argument);
extern void StartMicroAutoware(void *argument);

void MX_FREERTOS_Init(void); /* (MISRA C 2004 rule 8.1) */

/**
  * @brief  FreeRTOS initialization
  * @param  None
  * @retval None
  */
void MX_FREERTOS_Init(void) {
  /* USER CODE BEGIN Init */

  /* USER CODE END Init */
  /* Create the mutex(es) */
  /* creation of MutexControlSignal */
  MutexControlSignalHandle = osMutexNew(&MutexControlSignal_attributes);

  /* creation of MutexControlAction */
  MutexControlActionHandle = osMutexNew(&MutexControlAction_attributes);

  /* USER CODE BEGIN RTOS_MUTEX */
  /* add mutexes, ... */
  /* USER CODE END RTOS_MUTEX */

  /* USER CODE BEGIN RTOS_SEMAPHORES */
  /* add semaphores, ... */
  /* USER CODE END RTOS_SEMAPHORES */

  /* USER CODE BEGIN RTOS_TIMERS */
  /* start timers, add new ones, ... */
  /* USER CODE END RTOS_TIMERS */

  /* USER CODE BEGIN RTOS_QUEUES */
  /* add queues, ... */
  /* USER CODE END RTOS_QUEUES */

  /* Create the thread(s) */
  /* creation of TaskControle */
  TaskControleHandle = osThreadNew(StartTaskControle, NULL, &TaskControle_attributes);

  /* creation of TaskMicroAutowa */
  //TaskMicroAutowaHandle = osThreadNew(StartMicroAutoware, NULL, &TaskMicroAutowa_attributes);

  /* USER CODE BEGIN RTOS_THREADS */
  /* add threads, ... */
  /* USER CODE END RTOS_THREADS */

  /* USER CODE BEGIN RTOS_EVENTS */
  /* add events, ... */
  /* USER CODE END RTOS_EVENTS */

}

/* USER CODE BEGIN Header_StartTaskControle */
/**
  * @brief  __weak function for TaskControle, overrided by
  *         taskControle.h & taskControle.c.
  * @param  argument: Not used
  */
/* USER CODE END Header_StartTaskControle */
__weak void StartTaskControle(void *argument)
{
  /* USER CODE BEGIN StartTaskControle */

  /* USER CODE END StartTaskControle */
}

/* Private application code --------------------------------------------------*/
/* USER CODE BEGIN Application */

/**
  * @name   HAL_GPIO_EXTI_Callback
  * @brief  ISR callback for the JoySW, switching the control mode.
  * @param  GPIO_Pin: EXTI pin.
  * @retval None
  */
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
  if(JoySW_Pin == GPIO_Pin){
    ucButtonState ^= 1;
    osThreadFlagsSet(TaskControleHandle, 0x1000);
  }
}

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
{
  if(huart2 == * huart)
  {
	unsigned char ucStringRx = dma_head;

	switch (ucSmState)
		{
		  case 0:
			if('#' == ucStringRx)
			{
			  ucSmState = 1;
			  ucDataProcessed = 0;
			}
			break;

		  case 1:
			switch (ucStringRx)
			{
			  case 'A':
				ucSmState = 10;
				break;

			  case 'B':
				ucSmState = 20;
				break;

			  case 'C':
				ucSmState = 30;
				break;

			  case 'D':
				ucSmState = 40;
				break;

			  case '$':
				ucSmState = 0;
				return 1;
				break;

			  default:
				  break;
			}
			break;

		  case 10:
			xVehicleStatusRx.xLongSpeed.ucBytes[0] = ucStringRx;
			ucSmState = 11;
			break;

		  case 11:
			xVehicleStatusRx.xLongSpeed.ucBytes[1] = ucStringRx;
			ucSmState = 12;
			break;

		  case 12:
			xVehicleStatusRx.xLongSpeed.ucBytes[2] = ucStringRx;
			ucSmState = 13;
			break;

		  case 13:
			xVehicleStatusRx.xLongSpeed.ucBytes[3] = ucStringRx;
			ucSmState = 1;
			break;

		  case 20:
			xVehicleStatusRx.xLatSpeed.ucBytes[0] = ucStringRx;
			ucSmState = 21;
			break;

		  case 21:
			xVehicleStatusRx.xLatSpeed.ucBytes[1] = ucStringRx;
			ucSmState = 22;
			break;

		  case 22:
			xVehicleStatusRx.xLatSpeed.ucBytes[2] = ucStringRx;
			ucSmState = 23;
			break;

		  case 23:
			xVehicleStatusRx.xLatSpeed.ucBytes[3] = ucStringRx;
			ucSmState = 1;
			break;

		  case 30:
			xVehicleStatusRx.xHeadingRate.ucBytes[0] = ucStringRx;
			ucSmState = 31;
			break;

		  case 31:
			xVehicleStatusRx.xHeadingRate.ucBytes[1] = ucStringRx;
			ucSmState = 32;
			break;

		  case 32:
			xVehicleStatusRx.xHeadingRate.ucBytes[2] = ucStringRx;
			ucSmState = 33;
			break;

		  case 33:
			xVehicleStatusRx.xHeadingRate.ucBytes[3] = ucStringRx;
			ucSmState = 1;
			break;

		  case 40:
			xVehicleStatusRx.ucGear = ucStringRx;
			ucSmState = 1;
			break;


		  default:
			  break;
		}

	if(ret == 1){
		//setar flag
	}

  }
}

/* USER CODE END Application */

