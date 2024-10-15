#include "autoware.h"

void StartMicroAutoware(void *argument)
{

  // Variables -- START

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

  // TODO allocate memory for the msgs and update this memory usage in stack size.

  // TODO understand support and allocator
  rcl_node_t vehicleInterfaceNode;

  rclc_support_t support;

  rcl_allocator_t allocator;

  rclc_executor_t executor;

  // Variables -- END

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
    //printf_("Error on default allocators (line %d)\n", __LINE__);
  }

  // micro-ROS app

  executor = rclc_executor_get_zero_initialized_executor();

  allocator = rcl_get_default_allocator();

  //create init_options
  rclc_support_init(&support, 0, NULL, &allocator);

  // create node
  rclc_node_init_default(&vehicleInterfaceNode, NODE_NAME, "", &support);

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
			ROSIDL_GET_MSG_TYPE_SUPPORT(tier4_vehicle_msgs, msg, ActuationStatusStamped),
			"/vehicle/status/actuation_status");

  rclc_publisher_init_default(
			&steering_wheel_status_pub_,
			&vehicleInterfaceNode,
			ROSIDL_GET_MSG_TYPE_SUPPORT(tier4_vehicle_msgs, msg, SteeringWheelStatusStamped),
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


}
