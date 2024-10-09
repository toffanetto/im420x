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

// Autoware msg types
#include <autoware_control_msgs/msg/control.h>
#include <autoware_vehicle_msgs/msg/control_mode_report.h>
#include <autoware_vehicle_msgs/msg/engage.h>
#include <autoware_vehicle_msgs/msg/gear_command.h>
#include <autoware_vehicle_msgs/msg/gear_report.h>
#include <autoware_vehicle_msgs/msg/hazard_lights_command.h>
#include <autoware_vehicle_msgs/msg/hazard_lights_report.h>
#include <autoware_vehicle_msgs/msg/steering_report.h>
#include <autoware_vehicle_msgs/msg/turn_indicators_command.h>
#include <autoware_vehicle_msgs/msg/turn_indicators_report.h>
#include <autoware_vehicle_msgs/msg/velocity_report.h>
#include <autoware_vehicle_msgs/srv/control_mode_command.h>
#include <tier4_vehicle_msgs/msg/actuation_command_stamped.h>
#include <tier4_vehicle_msgs/msg/actuation_status_stamped.h>
#include <tier4_vehicle_msgs/msg/steering_wheel_status_stamped.h>
#include <tier4_vehicle_msgs/msg/vehicle_emergency_stamped.h>


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

void control_cmd_callback(const void * msgin);
void gear_cmd_callback(const void * msgin);
void turn_indicators_cmd_callback(const void * msgin);
void hazard_lights_cmd_callback(const void * msgin);
void actuation_cmd_callback(const void * msgin);
void emergency_callback(const void * msgin);

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
  * @brief  Function implementing the TaskMicroROS thread.
  * @param  argument: Not used
  * @retval None
  */
/* USER CODE END Header_StartTaskMicroROS */
void StartTaskMicroROS(void *argument)
{
  /* USER CODE BEGIN StartTaskMicroROS */

  // micro-ROS configuration

  // Setting transport layer
  rmw_uros_set_custom_transport(
	true,
	(void *) &huart3,
	cubemx_transport_open,
	cubemx_transport_close,
	cubemx_transport_write,
	cubemx_transport_read);

  // Setting memory allocation methods
  rcl_allocator_t freeRTOS_allocator = rcutils_get_zero_initialized_allocator();
  freeRTOS_allocator.allocate = microros_allocate;
  freeRTOS_allocator.deallocate = microros_deallocate;
  freeRTOS_allocator.reallocate = microros_reallocate;
  freeRTOS_allocator.zero_allocate =  microros_zero_allocate;

  if (!rcutils_set_default_allocator(&freeRTOS_allocator)) {
	  printf_("Error on default allocators (line %d)\n", __LINE__);
  }

  // micro-ROS app

  // Adopting exclusively the ROS variable standard

  // micro-ROS subscribers
  rcl_subscription_t control_cmd_sub_;           // autoware_control_msgs/msg/control.h
  rcl_subscription_t gear_cmd_sub_;              // autoware_vehicle_msgs/msg/gearcommand.h
  rcl_subscription_t turn_indicators_cmd_sub_;   // autoware_vehicle_msgs/msg/turn_indicators_command.h
  rcl_subscription_t hazard_lights_cmd_sub_;     // autoware_vehicle_msgs/msg/hazard_lights_command.h
  rcl_subscription_t actuation_cmd_sub_;         // tier4_vehicle_msgs/msg/actuation_command_stamped.h
  rcl_subscription_t emergency_sub_;             // tier4_vehicle_msgs/msg/vehicle_emergency_stamped.h

  // micro-ROS publishers
  rcl_publisher_t control_mode_pub_;             // autoware_vehicle_msgs/msg/control_mode_report.h
  rcl_publisher_t vehicle_twist_pub_;            // autoware_vehicle_msgs/msg/velocity_report.h>
  rcl_publisher_t steering_status_pub_;          // autoware_vehicle_msgs/msg/steering_report.h
  rcl_publisher_t gear_status_pub_;              // autoware_vehicle_msgs/msg/gear_report.h
  rcl_publisher_t turn_indicators_status_pub_;   // autoware_vehicle_msgs/msg/turn_indicators_report.h
  rcl_publisher_t hazard_lights_status_pub_;     // autoware_vehicle_msgs/msg/hazard_lights_report.h
  rcl_publisher_t actuation_status_pub_;         // tier4_vehicle_msgs/msg/actuation_status_stamped.h
  rcl_publisher_t steering_wheel_status_pub_;    // tier4_vehicle_msgs/msg/steering_wheel_status_stamped.h

  // micro-ROS messages
  autoware_control_msgs__msg__Control control_cmd_msg_;
  autoware_vehicle_msgs__msg__GearCommand gear_cmd_msg_;
  autoware_vehicle_msgs__msg__TurnIndicatorsCommand turn_indicators_cmd_msg_;
  autoware_vehicle_msgs__msg__HazardLightsCommand hazard_lights_cmd_msg_;
  tier4_vehicle_msgs__msg__ActuationCommandStamped actuation_cmd_msg_;
  tier4_vehicle_msgs__msg__VehicleEmergencyStamped emergency_msg_;

  autoware_vehicle_msgs__msg__ControlModeReport control_mode_msg_;
  autoware_vehicle_msgs__msg__VelocityReport vehicle_twist_msg_;
  autoware_vehicle_msgs__msg__SteeringReport steering_status_msg_;
  autoware_vehicle_msgs__msg__GearReport gear_status_msg_;
  autoware_vehicle_msgs__msg__TurnIndicatorsReport turn_indicators_status_msg_;
  autoware_vehicle_msgs__msg__HazardLightsReport hazard_lights_status_msg_;
  tier4_vehicle_msgs__msg__ActuationStatusStamped  actuation_status_msg_;
  tier4_vehicle_msgs__msg__SteeringWheelStatusStamped  steering_wheel_status_msg_;

  // micro-ROS ...
  // TODO understand support and allocator
  rcl_node_t vehicleInterfaceNode;

  rclc_support_t support;
  rcl_allocator_t allocator;

  rclc_executor_t executor = rclc_executor_get_zero_initialized_executor();

  allocator = rcl_get_default_allocator();

  //create init_options
  rclc_support_init(&support, 0, NULL, &allocator);

  // create node
  rclc_node_init_default(&vehicleInterfaceNode, "vehicle_interface", "", &support);

  // create executor
  rclc_executor_init(&executor, &support.context, 1, &allocator);
  // create subscribers
  // TODO set QoS
  rclc_subscription_init_default(
  		&control_cmd_sub_,
  		&vehicleInterfaceNode,
  		ROSIDL_GET_MSG_TYPE_SUPPORT(autoware_control_msgs, msg, Control),
  		"/control/command/control_cmd");

  rclc_subscription_init_default(
  		&gear_cmd_sub_,
  		&vehicleInterfaceNode,
  		ROSIDL_GET_MSG_TYPE_SUPPORT(autoware_vehicle_msgs, msg, GearCommand),
  		"/control/command/gear_cmd");

  rclc_subscription_init_default(
  		&turn_indicators_cmd_sub_,
  		&vehicleInterfaceNode,
  		ROSIDL_GET_MSG_TYPE_SUPPORT(autoware_vehicle_msgs, msg, TurnIndicatorsCommand),
  		"/control/command/turn_indicators_cmd");

  rclc_subscription_init_default(
  		&hazard_lights_cmd_sub_,
  		&vehicleInterfaceNode,
  		ROSIDL_GET_MSG_TYPE_SUPPORT(autoware_vehicle_msgs, msg, HazardLightsCommand ),
  		"/control/command/hazard_lights_cmd");

  rclc_subscription_init_default(
  		&actuation_cmd_sub_,
  		&vehicleInterfaceNode,
  		ROSIDL_GET_MSG_TYPE_SUPPORT(tier4_vehicle_msgs, msg, ActuationCommandStamped),
  		"/control/command/actuation_cmd");

  rclc_subscription_init_default(
  		&emergency_sub_,
  		&vehicleInterfaceNode,
  		ROSIDL_GET_MSG_TYPE_SUPPORT(tier4_vehicle_msgs, msg, VehicleEmergencyStamped),
  		"/control/command/emergency_cmd");

  // create publishers
  // TODO set QoS
  rclc_publisher_init_default(
	&control_mode_pub_,
	&vehicleInterfaceNode,
	ROSIDL_GET_MSG_TYPE_SUPPORT(autoware_vehicle_msgs, msg, ControlModeReport),
	"/vehicle/status/control_mode");

  rclc_publisher_init_default(
	&vehicle_twist_pub_,
	&vehicleInterfaceNode,
	ROSIDL_GET_MSG_TYPE_SUPPORT(autoware_vehicle_msgs, msg, VelocityReport),
	"/vehicle/status/velocity_status");

  rclc_publisher_init_default(
	&steering_status_pub_,
	&vehicleInterfaceNode,
	ROSIDL_GET_MSG_TYPE_SUPPORT(autoware_vehicle_msgs, msg, SteeringReport),
	"/vehicle/status/steering_status");

  rclc_publisher_init_default(
	&gear_status_pub_,
	&vehicleInterfaceNode,
	ROSIDL_GET_MSG_TYPE_SUPPORT(autoware_vehicle_msgs, msg, GearReport),
	"/vehicle/status/gear_status");

  rclc_publisher_init_default(
	&turn_indicators_status_pub_,
	&vehicleInterfaceNode,
	ROSIDL_GET_MSG_TYPE_SUPPORT(autoware_vehicle_msgs, msg, TurnIndicatorsReport),
	"/vehicle/status/turn_indicators_status");

  rclc_publisher_init_default(
	&hazard_lights_status_pub_,
	&vehicleInterfaceNode,
	ROSIDL_GET_MSG_TYPE_SUPPORT(autoware_vehicle_msgs, msg, HazardLightsReport),
	"/vehicle/status/hazard_lights_status");

  rclc_publisher_init_default(
	&actuation_status_pub_,
	&vehicleInterfaceNode,
	ROSIDL_GET_MSG_TYPE_SUPPORT(autoware_vehicle_msgs, msg, ActuationStatusStamped),
	"/vehicle/status/actuation_status");

  rclc_publisher_init_default(
	&steering_wheel_status_pub_,
	&vehicleInterfaceNode,
	ROSIDL_GET_MSG_TYPE_SUPPORT(autoware_vehicle_msgs, msg, SteeringWheelStatusStamped),
	"/vehicle/status/steering_wheel_status");

  // adding callbacks to executor
  rclc_executor_add_subscription(&executor, &control_cmd_sub_, &control_cmd_msg_, &control_cmd_callback, ON_NEW_DATA);
  rclc_executor_add_subscription(&executor, &gear_cmd_sub_, &gear_cmd_msg_, &gear_cmd_callback, ON_NEW_DATA);
  rclc_executor_add_subscription(&executor, &turn_indicators_cmd_sub_, &turn_indicators_cmd_msg_, &turn_indicators_cmd_callback, ON_NEW_DATA);
  rclc_executor_add_subscription(&executor, &hazard_lights_cmd_sub_, &hazard_lights_cmd_msg_, &hazard_lights_cmd_callback, ON_NEW_DATA);
  rclc_executor_add_subscription(&executor, &actuation_cmd_sub_, &actuation_cmd_msg_, &actuation_cmd_callback, ON_NEW_DATA);
  rclc_executor_add_subscription(&executor, &emergency_sub_, &emergency_msg_, &emergency_callback, ON_NEW_DATA);


  // running executor
  rclc_executor_spin(&executor);



  /* USER CODE END StartTaskMicroROS */
}

/* Private application code --------------------------------------------------*/
/* USER CODE BEGIN Application */

/* USER CODE END Application */

