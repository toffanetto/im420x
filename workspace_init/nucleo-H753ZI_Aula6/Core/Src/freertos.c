/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * File Name          : freertos.c
  * Description        : Code for freertos applications
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
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
#include "light_printf.h"
#include <stdio.h>
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */
typedef struct{
	char cNumTask;
	char cMes[100];
	unsigned int iCount;
} message_t;
/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
/* USER CODE BEGIN Variables */

/* USER CODE END Variables */
/* Definitions for Task1 */
osThreadId_t Task1Handle;
const osThreadAttr_t Task1_attributes = {
  .name = "Task1",
  .stack_size = 512 * 4,
  .priority = (osPriority_t) osPriorityNormal,
};
/* Definitions for Task2 */
osThreadId_t Task2Handle;
const osThreadAttr_t Task2_attributes = {
  .name = "Task2",
  .stack_size = 512 * 4,
  .priority = (osPriority_t) osPriorityLow,
};
/* Definitions for TaskGateKeeper */
osThreadId_t TaskGateKeeperHandle;
const osThreadAttr_t TaskGateKeeper_attributes = {
  .name = "TaskGateKeeper",
  .stack_size = 512 * 4,
  .priority = (osPriority_t) osPriorityHigh,
};
/* Definitions for QueuePrint */
osMessageQueueId_t QueuePrintHandle;
const osMessageQueueAttr_t QueuePrint_attributes = {
  .name = "QueuePrint"
};
/* Definitions for Timer1 */
osTimerId_t Timer1Handle;
const osTimerAttr_t Timer1_attributes = {
  .name = "Timer1"
};

/* Private function prototypes -----------------------------------------------*/
/* USER CODE BEGIN FunctionPrototypes */

/* USER CODE END FunctionPrototypes */

void StartTask1(void *argument);
void StartTask2(void *argument);
void StartTaskGateKeeper(void *argument);
void CallbackTimer1(void *argument);

void MX_FREERTOS_Init(void); /* (MISRA C 2004 rule 8.1) */

/**
  * @brief  FreeRTOS initialization
  * @param  None
  * @retval None
  */
void MX_FREERTOS_Init(void) {
  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* USER CODE BEGIN RTOS_MUTEX */
  /* add mutexes, ... */
  /* USER CODE END RTOS_MUTEX */

  /* USER CODE BEGIN RTOS_SEMAPHORES */
  /* add semaphores, ... */
  /* USER CODE END RTOS_SEMAPHORES */

  /* Create the timer(s) */
  /* creation of Timer1 */
  Timer1Handle = osTimerNew(CallbackTimer1, osTimerPeriodic, NULL, &Timer1_attributes);

  /* USER CODE BEGIN RTOS_TIMERS */
  /* start timers, add new ones, ... */
  /* USER CODE END RTOS_TIMERS */

  /* Create the queue(s) */
  /* creation of QueuePrint */
  QueuePrintHandle = osMessageQueueNew (16, sizeof(message_t), &QueuePrint_attributes);

  /* USER CODE BEGIN RTOS_QUEUES */
  /* add queues, ... */
  /* USER CODE END RTOS_QUEUES */

  /* Create the thread(s) */
  /* creation of Task1 */
  Task1Handle = osThreadNew(StartTask1, NULL, &Task1_attributes);

  /* creation of Task2 */
  Task2Handle = osThreadNew(StartTask2, NULL, &Task2_attributes);

  /* creation of TaskGateKeeper */
  TaskGateKeeperHandle = osThreadNew(StartTaskGateKeeper, NULL, &TaskGateKeeper_attributes);

  /* USER CODE BEGIN RTOS_THREADS */
  /* add threads, ... */
  /* USER CODE END RTOS_THREADS */

  /* USER CODE BEGIN RTOS_EVENTS */
  /* add events, ... */
  /* USER CODE END RTOS_EVENTS */

}

/* USER CODE BEGIN Header_StartTask1 */
/**
  * @brief  Function implementing the Task1 thread.
  * @param  argument: Not used
  * @retval None
  */
/* USER CODE END Header_StartTask1 */
void StartTask1(void *argument)
{
  /* USER CODE BEGIN StartTask1 */

  message_t xMes;
  xMes.cNumTask = '1';
  sprintf(&xMes.cMes[0], "Mensagem Task 1");
  xMes.iCount = 0;

  /* Infinite loop */
  for(;;)
  {
	osMessageQueuePut(QueuePrintHandle, &xMes, 0, (TickType_t)osWaitForever);
	xMes.iCount++;
    osDelay(1000);
  }
  /* USER CODE END StartTask1 */
}

/* USER CODE BEGIN Header_StartTask2 */
/**
* @brief Function implementing the Task2 thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_StartTask2 */
void StartTask2(void *argument)
{
  /* USER CODE BEGIN StartTask2 */
  message_t xMes;
  xMes.cNumTask = '2';
  sprintf(&xMes.cMes[0], "Mensagem Task 2");
  xMes.iCount = 0;

  /* Infinite loop */
  for(;;)
  {
	osMessageQueuePut(QueuePrintHandle, &xMes, 0, osWaitForever);
	xMes.iCount++;
	osDelay(1000);
  }
  /* USER CODE END StartTask2 */
}

/* USER CODE BEGIN Header_StartTaskGateKeeper */
/**
* @brief Function implementing the TaskGateKeeper thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_StartTaskGateKeeper */
void StartTaskGateKeeper(void *argument)
{
  /* USER CODE BEGIN StartTaskGateKeeper */
  message_t xMes;


  osTimerStart(Timer1Handle, 1000U);
  /* Infinite loop */
  for(;;)
  {

	osMessageQueueGet(QueuePrintHandle, &xMes, 0, osWaitForever);

	// Remake using UART_Transmit, for training use UART from FreeRTOS from scrath
	printf_("Task: %c, Msg: %s, Count = %d \n\r", xMes.cNumTask, xMes.cMes, xMes.iCount);


	osDelay(100);
  }
  /* USER CODE END StartTaskGateKeeper */
}

/* CallbackTimer1 function */
void CallbackTimer1(void *argument)
{
  /* USER CODE BEGIN CallbackTimer1 */

  HAL_GPIO_TogglePin(LD2_GPIO_Port, LD2_Pin);

  /* USER CODE END CallbackTimer1 */
}

/* Private application code --------------------------------------------------*/
/* USER CODE BEGIN Application */

/* USER CODE END Application */

