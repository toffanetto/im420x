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

/* USER CODE END Variables */
/* Definitions for Task1 */
osThreadId_t Task1Handle;
const osThreadAttr_t Task1_attributes = {
  .name = "Task1",
  .stack_size = 128 * 4,
  .priority = (osPriority_t) osPriorityNormal,
};
/* Definitions for Task2 */
osThreadId_t Task2Handle;
const osThreadAttr_t Task2_attributes = {
  .name = "Task2",
  .stack_size = 128 * 4,
  .priority = (osPriority_t) osPriorityLow,
};
/* Definitions for MutexPrintf */
osMutexId_t MutexPrintfHandle;
const osMutexAttr_t MutexPrintf_attributes = {
  .name = "MutexPrintf"
};
/* Definitions for SemPrintf */
osSemaphoreId_t SemPrintfHandle;
const osSemaphoreAttr_t SemPrintf_attributes = {
  .name = "SemPrintf"
};
/* Definitions for FlagPrintf */
osEventFlagsId_t FlagPrintfHandle;
const osEventFlagsAttr_t FlagPrintf_attributes = {
  .name = "FlagPrintf"
};

/* Private function prototypes -----------------------------------------------*/
/* USER CODE BEGIN FunctionPrototypes */

/* USER CODE END FunctionPrototypes */

void FncTask1(void *argument);
void FncTask2(void *argument);

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
  /* creation of MutexPrintf */
  MutexPrintfHandle = osMutexNew(&MutexPrintf_attributes);

  /* USER CODE BEGIN RTOS_MUTEX */
  /* add mutexes, ... */
  /* USER CODE END RTOS_MUTEX */

  /* Create the semaphores(s) */
  /* creation of SemPrintf */
  SemPrintfHandle = osSemaphoreNew(1, 0, &SemPrintf_attributes);

  /* USER CODE BEGIN RTOS_SEMAPHORES */
  /* add semaphores, ... */
  //osSemaphoreRelease(SemPrintfHandle);
  /* USER CODE END RTOS_SEMAPHORES */

  /* USER CODE BEGIN RTOS_TIMERS */
  /* start timers, add new ones, ... */
  /* USER CODE END RTOS_TIMERS */

  /* USER CODE BEGIN RTOS_QUEUES */
  /* add queues, ... */
  /* USER CODE END RTOS_QUEUES */

  /* Create the thread(s) */
  /* creation of Task1 */
  Task1Handle = osThreadNew(FncTask1, NULL, &Task1_attributes);

  /* creation of Task2 */
  Task2Handle = osThreadNew(FncTask2, NULL, &Task2_attributes);

  /* USER CODE BEGIN RTOS_THREADS */
  /* add threads, ... */
  /* USER CODE END RTOS_THREADS */

  /* creation of FlagPrintf */
  FlagPrintfHandle = osEventFlagsNew(&FlagPrintf_attributes);

  /* USER CODE BEGIN RTOS_EVENTS */
  /* add events, ... */
  /* USER CODE END RTOS_EVENTS */

}

/* USER CODE BEGIN Header_FncTask1 */
/**
  * @brief  Function implementing the Task1 thread.
  * @param  argument: Not used
  * @retval None
  */
/* USER CODE END Header_FncTask1 */
void FncTask1(void *argument)
{
  /* USER CODE BEGIN FncTask1 */
  /* Infinite loop */
  osDelay(1);
  for(;;)
  {
//	**Desabilitando o escalonador**
//	osKernelLock();
//	printf_("Escrito pela Task 1\n\r");
//	osKernelUnlock();

//	**Semaforo**
//	osSemaphoreAcquire(SemPrintfHandle, osWaitForever); // Início seção crítica
//	printf_("Escrito pela Task 1\n\r");
//	osSemaphoreRelease(SemPrintfHandle); // Final da seção crítica

//	**Mutex**
//	osMutexAcquire(MutexPrintfHandle, osWaitForever);
//	printf_("Escrito pela Task 1\n\r");
//	osMutexRelease(MutexPrintfHandle);
//  osDelay(100);

//	osDelay(1000);
//	osSemaphoreRelease(SemPrintfHandle);

//	osEventFlagsSet(FlagPrintfHandle, 0x01);
//	osDelay(1000);
//	osEventFlagsSet(FlagPrintfHandle, 0x02);

	osDelay(1000);
	osThreadFlagsSet(Task2Handle, 0x01);
  }
  /* USER CODE END FncTask1 */
}

/* USER CODE BEGIN Header_FncTask2 */
/**
* @brief Function implementing the Task2 thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_FncTask2 */
void FncTask2(void *argument)
{
  /* USER CODE BEGIN FncTask2 */
  /* Infinite loop */
  for(;;)
  {
//	**Desabilitando o escalonador**
//	osKernelLock();
//	printf_("Escrito pela Task 2\n\r");
//	osKernelUnlock();

//	**Semaforo**
//	osSemaphoreAcquire(SemPrintfHandle, osWaitForever);
//	printf_("Escrito pela Task 2\n\r");
//	osSemaphoreRelease(SemPrintfHandle);

//	**Mutex**
//	osMutexAcquire(MutexPrintfHandle, osWaitForever);
//	printf_("Escrito pela Task 2\n\r");
//	osMutexRelease(MutexPrintfHandle);
//	osDelay(100);

//	osSemaphoreAcquire(SemPrintfHandle, osWaitForever);
//	printf_("A Task 2 adquiriu o semaforo.\n\r");
//	HAL_GPIO_TogglePin(LD2_GPIO_Port, LD2_Pin);

//	osEventFlagsWait(FlagPrintfHandle, 0x03, osFlagsWaitAll, osWaitForever);
//	printf_("A Task 2 recebeu a event flag.\n\r");
//	HAL_GPIO_TogglePin(LD2_GPIO_Port, LD2_Pin);

	osThreadFlagsWait(0x01, osFlagsWaitAny, osWaitForever);
	printf_("A Task 2 adquiriu a thread flag.\n\r");
	HAL_GPIO_TogglePin(LD2_GPIO_Port, LD2_Pin);

  }
  /* USER CODE END FncTask2 */
}

/* Private application code --------------------------------------------------*/
/* USER CODE BEGIN Application */

/* USER CODE END Application */

