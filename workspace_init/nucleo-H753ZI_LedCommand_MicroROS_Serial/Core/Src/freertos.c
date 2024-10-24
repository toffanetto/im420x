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

// Peripherals includes -- START
#include "dma.h"
#include "eth.h"
#include "usart.h"
#include "usb_otg.h"
#include "gpio.h"

// Peripherals includes -- END

// Libraries includes -- START
#include "light_printf.h"

// Libraries includes -- END

// MicroROS includes -- START
#include <rcl/rcl.h>
#include <rcl/error_handling.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>
#include <uxr/client/transport.h>
#include <rmw_microxrcedds_c/config.h>
#include <rmw_microros/rmw_microros.h>
#include <std_msgs/msg/u_int8_multi_array.h>

#include "callbacks.h"

// MicroROS includes -- END


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
/* Definitions for TaskMicroROS */
osThreadId_t TaskMicroROSHandle;
const osThreadAttr_t TaskMicroROS_attributes = {
  .name = "TaskMicroROS",
  .stack_size = 3000 * 4,
  .priority = (osPriority_t) osPriorityNormal,
};

/* Private function prototypes -----------------------------------------------*/
/* USER CODE BEGIN FunctionPrototypes */


// MicroROS FunctionPrototypes -- START

bool cubemx_transport_open(struct uxrCustomTransport * transport);
bool cubemx_transport_close(struct uxrCustomTransport * transport);
size_t cubemx_transport_write(struct uxrCustomTransport* transport, const uint8_t * buf, size_t len, uint8_t * err);
size_t cubemx_transport_read(struct uxrCustomTransport* transport, uint8_t* buf, size_t len, int timeout, uint8_t* err);

void * microros_allocate(size_t size, void * state);
void microros_deallocate(void * pointer, void * state);
void * microros_reallocate(void * pointer, size_t size, void * state);
void * microros_zero_allocate(size_t number_of_elements, size_t size_of_element, void * state);

// MicroROS FunctionPrototypes -- END

/* USER CODE END FunctionPrototypes */

void StartTaskMicroROS(void *argument);

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

  /* USER CODE BEGIN RTOS_TIMERS */
  /* start timers, add new ones, ... */
  /* USER CODE END RTOS_TIMERS */

  /* USER CODE BEGIN RTOS_QUEUES */
  /* add queues, ... */
  /* USER CODE END RTOS_QUEUES */

  /* Create the thread(s) */
  /* creation of TaskMicroROS */
  TaskMicroROSHandle = osThreadNew(StartTaskMicroROS, NULL, &TaskMicroROS_attributes);

  /* USER CODE BEGIN RTOS_THREADS */
  /* add threads, ... */
  /* USER CODE END RTOS_THREADS */

  /* USER CODE BEGIN RTOS_EVENTS */
  /* add events, ... */
  /* USER CODE END RTOS_EVENTS */

}

/* USER CODE BEGIN Header_StartTaskMicroROS */
/**
  * @brief  Function implementing MicroROS task, with node, executors and subscribers declarations.
  * @param  argument: Not used
  * @retval None
  */
/* USER CODE END Header_StartTaskMicroROS */
void StartTaskMicroROS(void *argument)
{
  /* USER CODE BEGIN StartTaskMicroROS */

  // micro-ROS configuration

  // Transport layer configuration
  rmw_uros_set_custom_transport(
	true,
	(void *) &huart3,
	cubemx_transport_open,
	cubemx_transport_close,
	cubemx_transport_write,
	cubemx_transport_read);

  // Memory management configuration
  rcl_allocator_t freeRTOS_allocator = rcutils_get_zero_initialized_allocator();
  freeRTOS_allocator.allocate = microros_allocate;
  freeRTOS_allocator.deallocate = microros_deallocate;
  freeRTOS_allocator.reallocate = microros_reallocate;
  freeRTOS_allocator.zero_allocate =  microros_zero_allocate;

  // micro-ROS app


  rclc_support_t xSupport;
  rcl_allocator_t xAllocator;
  rcl_node_t xNode;
  rclc_executor_t xExecutor;

  // Topic subscriber
  rcl_subscription_t xLedSub;

  // Subscriber message declaration
  std_msgs__msg__UInt8MultiArray xCommand;

  // Subscriber message memory allocation
  xCommand.data.data = (uint8_t*) malloc(4 * sizeof(uint8_t));

  // Allocator initialization
  xAllocator = rcl_get_default_allocator();

  // Callback executor initialization
  xExecutor = rclc_executor_get_zero_initialized_executor();

  // Creating init_options
  rclc_support_init(&xSupport, 0, NULL, &xAllocator);

  // Creating node
  rclc_node_init_default(&xNode, "stm32", "", &xSupport);

  // Creating subscriber
  rclc_subscription_init_default(
    &xLedSub,
    &xNode,
    ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, UInt8MultiArray),
    "led_control");

  // Create callback executor
  rclc_executor_init(&xExecutor, &xSupport.context, 1, &xAllocator);

  // Add callback to executor. Callback header described in callbacks.h
  rclc_executor_add_subscription(&xExecutor, &xLedSub, &xCommand, &vLedCallback, ON_NEW_DATA);

  // Starting executor
  rclc_executor_spin(&xExecutor);

  // **Code never gets here, now the executor is controlling the task**

  /* USER CODE END StartTaskMicroROS */
}

/* Private application code --------------------------------------------------*/
/* USER CODE BEGIN Application */

/* USER CODE END Application */

