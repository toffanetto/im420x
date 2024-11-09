/**
  ******************************************************************************
  * @file    microAutoware.c
  * @brief   This file contains the FreeRTOS task microAutoware, implementing
  *          a vehicle interface for Autoware using micro-ros.
  ******************************************************************************
  * @author  Gabriel Toffanetto França da Rocha 
  *          Laboratory of Autonomous Vehicles (LMA) - FEM/Unicamp
  * @date    Created:  October 9, 2024
  *          Modified: 
  ******************************************************************************
  */
 
#include <microAutoware.h>

/**
  * @name   ucSubscribersRecieved
  * @brief  Topic recieved flag for gather data and send to TaskControl.
  */
unsigned char ucSubscribersRecieved = 0;

// From freertos.c
extern osMutexId_t MutexControlActionHandle;
extern osMutexId_t MutexControlSignalHandle;
extern osThreadId_t TaskControleHandle;

// From main.c
extern control_action xControlAction;
extern control_signal xControlSignal;

/**
  * @name   StartMicroAutoware
  * @brief  MicroAutoware task function.
  * @param  argument : not used.
  * @retval None
  */
void StartMicroAutoware(void * argument)
{

  // Variables -- START

  unsigned int uiFlags;
  unsigned char ucControlMode = AUTOWARE;

  // micro-ros QoS
  const rmw_qos_profile_t * qos_autoware = &rmw_qos_profile_autoware;

  // micro-ROS subscribers
  rcl_subscription_t clock_sub_;                 // rosgraph_msgs/msg/clock.h

  rcl_subscription_t control_cmd_sub_;           // autoware_auto_control_msgs/msg/control.h
  rcl_subscription_t gear_cmd_sub_;              // autoware_auto_vehicle_msgs/msg/gearcommand.h

  rcl_subscription_t turn_indicators_cmd_sub_;   // autoware_auto_vehicle_msgs/msg/turn_indicators_command.h
  rcl_subscription_t hazard_lights_cmd_sub_;     // autoware_auto_vehicle_msgs/msg/hazard_lights_command.h
  rcl_subscription_t actuation_cmd_sub_;         // tier4_vehicle_msgs/msg/actuation_command_stamped.h
  rcl_subscription_t emergency_sub_;             // tier4_vehicle_msgs/msg/vehicle_emergency_stamped.h

  // micro-ROS publishers
  rcl_publisher_t control_mode_pub_;             // autoware_auto_vehicle_msgs/msg/control_mode_report.h
  rcl_publisher_t vehicle_twist_pub_;            // autoware_auto_vehicle_msgs/msg/velocity_report.h>
  rcl_publisher_t steering_status_pub_;          // autoware_auto_vehicle_msgs/msg/steering_report.h
  rcl_publisher_t gear_status_pub_;              // autoware_auto_vehicle_msgs/msg/gear_report.h

  rcl_publisher_t turn_indicators_status_pub_;   // autoware_auto_vehicle_msgs/msg/turn_indicators_report.h
  rcl_publisher_t hazard_lights_status_pub_;     // autoware_auto_vehicle_msgs/msg/hazard_lights_report.h
  rcl_publisher_t actuation_status_pub_;         // tier4_vehicle_msgs/msg/actuation_status_stamped.h
  rcl_publisher_t steering_wheel_status_pub_;    // tier4_vehicle_msgs/msg/steering_wheel_status_stamped.h

  //micro-ROS services
  rcl_service_t control_mode_server_;

  // micro-ROS timers
  rcl_timer_t timer_watchdog_agent;

  // micro-ROS messages
  rosgraph_msgs__msg__Clock clock_msg_;

  autoware_auto_control_msgs__msg__AckermannControlCommand control_cmd_msg_;
  autoware_auto_vehicle_msgs__msg__GearCommand gear_cmd_msg_;

  autoware_auto_vehicle_msgs__msg__TurnIndicatorsCommand turn_indicators_cmd_msg_;
  autoware_auto_vehicle_msgs__msg__HazardLightsCommand hazard_lights_cmd_msg_;
  tier4_vehicle_msgs__msg__ActuationCommandStamped actuation_cmd_msg_;
  tier4_vehicle_msgs__msg__VehicleEmergencyStamped emergency_msg_;

  autoware_auto_vehicle_msgs__srv__ControlModeCommand_Request control_mode_request_msg_;
  autoware_auto_vehicle_msgs__srv__ControlModeCommand_Response control_mode_response_msg_;

  autoware_auto_vehicle_msgs__msg__ControlModeReport control_mode_msg_;
  autoware_auto_vehicle_msgs__msg__VelocityReport vehicle_twist_msg_;
  autoware_auto_vehicle_msgs__msg__SteeringReport steering_status_msg_;
  autoware_auto_vehicle_msgs__msg__GearReport gear_status_msg_;

  autoware_auto_vehicle_msgs__msg__TurnIndicatorsReport turn_indicators_status_msg_;
  autoware_auto_vehicle_msgs__msg__HazardLightsReport hazard_lights_status_msg_;
  tier4_vehicle_msgs__msg__ActuationStatusStamped  actuation_status_msg_;
  tier4_vehicle_msgs__msg__SteeringWheelStatusStamped  steering_wheel_status_msg_;

  rcl_node_t VehicleInterfaceNode;

  rclc_support_t support;

  rcl_allocator_t allocator;

  rclc_executor_t executor;

  // Variables -- END

  // micro-ROS configuration

  // Setting transport layer
  rmw_uros_set_custom_transport(
    true,
    (void * ) &huart3,
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

  // micro-ROS app

  executor = rclc_executor_get_zero_initialized_executor();

  allocator = rcl_get_default_allocator();

  //create init_options
  rclc_support_init(&support, 0, NULL, &allocator);

  // create node
  rclc_node_init_default(&VehicleInterfaceNode, NODE_NAME, "microautoware", &support);

  // create executor
  rclc_executor_init(&executor, &support.context, 1, &allocator);

  // create timers
  rclc_timer_init_default(&timer_watchdog_agent, &support, WATCHDOG_AGENT_TIMEOUT, timer_watchdog_agent_callback);

  // create subscribers
  rclc_subscription_init(
    		&clock_sub_,
    		&VehicleInterfaceNode,
    		ROSIDL_GET_MSG_TYPE_SUPPORT(rosgraph_msgs, msg, Clock),
    		"/clock", qos_autoware);
        
  rclc_subscription_init(
    		&control_cmd_sub_,
    		&VehicleInterfaceNode,
    		ROSIDL_GET_MSG_TYPE_SUPPORT(autoware_auto_control_msgs, msg, AckermannControlCommand),
    		"/control/command/control_cmd", qos_autoware);

  rclc_subscription_init(
    		&gear_cmd_sub_,
    		&VehicleInterfaceNode,
    		ROSIDL_GET_MSG_TYPE_SUPPORT(autoware_auto_vehicle_msgs, msg, GearCommand),
    		"/control/command/gear_cmd", qos_autoware);

  rclc_subscription_init(
    		&turn_indicators_cmd_sub_,
    		&VehicleInterfaceNode,
    		ROSIDL_GET_MSG_TYPE_SUPPORT(autoware_auto_vehicle_msgs, msg, TurnIndicatorsCommand),
    		"/control/command/turn_indicators_cmd", qos_autoware);

  rclc_subscription_init(
    		&hazard_lights_cmd_sub_,
    		&VehicleInterfaceNode,
    		ROSIDL_GET_MSG_TYPE_SUPPORT(autoware_auto_vehicle_msgs, msg, HazardLightsCommand ),
    		"/control/command/hazard_lights_cmd", qos_autoware);

  rclc_subscription_init(
    		&actuation_cmd_sub_,
    		&VehicleInterfaceNode,
    		ROSIDL_GET_MSG_TYPE_SUPPORT(tier4_vehicle_msgs, msg, ActuationCommandStamped),
    		"/control/command/actuation_cmd", qos_autoware);

  rclc_subscription_init(
    		&emergency_sub_,
    		&VehicleInterfaceNode,
    		ROSIDL_GET_MSG_TYPE_SUPPORT(tier4_vehicle_msgs, msg, VehicleEmergencyStamped),
    		"/control/command/emergency_cmd", qos_autoware);

  // create publishers
  rclc_publisher_init(
        &control_mode_pub_,
        &VehicleInterfaceNode,
        ROSIDL_GET_MSG_TYPE_SUPPORT(autoware_auto_vehicle_msgs, msg, ControlModeReport),
        "/vehicle/status/control_mode", qos_autoware);

  rclc_publisher_init(
		    &vehicle_twist_pub_,
        &VehicleInterfaceNode,
        ROSIDL_GET_MSG_TYPE_SUPPORT(autoware_auto_vehicle_msgs, msg, VelocityReport),
        "/vehicle/status/velocity_status", qos_autoware);

  rclc_publisher_init(
        &steering_status_pub_,
        &VehicleInterfaceNode,
        ROSIDL_GET_MSG_TYPE_SUPPORT(autoware_auto_vehicle_msgs, msg, SteeringReport),
        "/vehicle/status/steering_status", qos_autoware);

  rclc_publisher_init(
        &gear_status_pub_,
        &VehicleInterfaceNode,
        ROSIDL_GET_MSG_TYPE_SUPPORT(autoware_auto_vehicle_msgs, msg, GearReport),
        "/vehicle/status/gear_status", qos_autoware);

  rclc_publisher_init(
        &turn_indicators_status_pub_,
        &VehicleInterfaceNode,
        ROSIDL_GET_MSG_TYPE_SUPPORT(autoware_auto_vehicle_msgs, msg, TurnIndicatorsReport),
        "/vehicle/status/turn_indicators_status", qos_autoware);

  rclc_publisher_init(
        &hazard_lights_status_pub_,
        &VehicleInterfaceNode,
        ROSIDL_GET_MSG_TYPE_SUPPORT(autoware_auto_vehicle_msgs, msg, HazardLightsReport),
        "/vehicle/status/hazard_lights_status", qos_autoware);

  rclc_publisher_init(
        &actuation_status_pub_,
        &VehicleInterfaceNode,
        ROSIDL_GET_MSG_TYPE_SUPPORT(tier4_vehicle_msgs, msg, ActuationStatusStamped),
        "/vehicle/status/actuation_status", qos_autoware);

  rclc_publisher_init(
        &steering_wheel_status_pub_,
        &VehicleInterfaceNode,
        ROSIDL_GET_MSG_TYPE_SUPPORT(tier4_vehicle_msgs, msg, SteeringWheelStatusStamped),
        "/vehicle/status/steering_wheel_status", qos_autoware);

  // creating servers
  rclc_service_init(
		    &control_mode_server_,
        &VehicleInterfaceNode,
        ROSIDL_GET_SRV_TYPE_SUPPORT(autoware_auto_vehicle_msgs, srv, ControlModeCommand),
        "/control/control_mode_request", qos_autoware);


  // adding callbacks to executor
  rclc_executor_add_subscription(&executor, &clock_sub_, &clock_msg_, &clock_callback, ON_NEW_DATA);
  rclc_executor_add_subscription(&executor, &control_cmd_sub_, &control_cmd_msg_, &control_cmd_callback, ON_NEW_DATA);
  
  rclc_executor_add_service(&executor, &control_mode_server_, &control_mode_request_msg_, &control_mode_response_msg_, control_mode_cmd_callback);

  rclc_executor_add_subscription(&executor, &gear_cmd_sub_, &gear_cmd_msg_, &gear_cmd_callback, ON_NEW_DATA);
  rclc_executor_add_subscription(&executor, &turn_indicators_cmd_sub_, &turn_indicators_cmd_msg_, &turn_indicators_cmd_callback, ON_NEW_DATA);
  rclc_executor_add_subscription(&executor, &hazard_lights_cmd_sub_, &hazard_lights_cmd_msg_, &hazard_lights_cmd_callback, ON_NEW_DATA);
  rclc_executor_add_subscription(&executor, &actuation_cmd_sub_, &actuation_cmd_msg_, &actuation_cmd_callback, ON_NEW_DATA);
  rclc_executor_add_subscription(&executor, &emergency_sub_, &emergency_msg_, &emergency_callback, ON_NEW_DATA);


  // pinging micro-ros agent
  rmw_ret_t xPingResult = rmw_uros_ping_agent(1000, 20);

  // Setting flag on TaskControle to enable autonomus mode
  osThreadFlagsSet(TaskControleHandle, MICRO_ROS_AGENT_ONLINE_FLAG);


  // Task loop
  for (;;)
  {

    // Sync time with ROS
    rmw_uros_sync_session(TIMEOUT_TS_SYNC);

    rclc_executor_spin_some(&executor, EXECUTOR_SPIN_PERIOD * (1000 * 1000)); // Spinning executor for EXECUTOR_SPIN_PERIOD * (1000 * 1000) ns.

    // Checking if control mode has changed by vehicle or Autoware.
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

    control_mode_msg_.stamp = clock_msg_.clock;
    control_mode_msg_.mode = ucControlMode;
    rcl_publish(&control_mode_pub_, &control_mode_msg_, NULL);

    // All topics are recieved (maybe not all...)
    if(0b1 & (ucSubscribersRecieved >> 1)) // Checking if control_cmd_sub_ data arrives (second bit of ucSubscribersRecieved)
    {
      // Autonomous mode: Gather all subs data, then compact and send to TaskControle.
      if(AUTOWARE == ucControlMode)
      {
        osMutexAcquire(MutexControlActionHandle, osWaitForever);
        xControlAction.xSteeringAngle.fFloat = control_cmd_msg_.lateral.steering_tire_angle * 1.2;
        xControlAction.xSteeringVelocity.fFloat = control_cmd_msg_.lateral.steering_tire_rotation_rate * 1.2;
        xControlAction.xSpeed.fFloat = control_cmd_msg_.longitudinal.speed;
        xControlAction.xAcceleration.fFloat = control_cmd_msg_.longitudinal.acceleration;
        xControlAction.xJerk.fFloat = control_cmd_msg_.longitudinal.jerk;
        xControlAction.ucControlMode = AUTOWARE;
        osMutexRelease(MutexControlSignalHandle);

        osThreadFlagsSet(TaskControleHandle, DATA_UPDATED_FLAG);
      }

    }

    // WAIT for flag to sync xControlSignal update
    uiFlags = osThreadFlagsGet();
    uiFlags = osThreadFlagsWait(DATA_UPDATED_FLAG, osFlagsWaitAll, TIMEOUT_GET_CONTROL_SIGNAL);

    // Timeout Error
    if(osFlagsErrorTimeout == uiFlags)
    {

    }

    // xControlSignal updated
    if(0x100 == uiFlags)
    {
      // Assembling microAutoware msgs
      osMutexAcquire(MutexControlSignalHandle, osWaitForever);

      // vehicle_twist_msg_ data

      rosidl_runtime_c__String xFrameId;
      char cFrame[10] = "base_link";
      xFrameId.data = cFrame;
      xFrameId.size = 9;
      xFrameId.capacity = 9;

      vehicle_twist_msg_.header.stamp = clock_msg_.clock;
      vehicle_twist_msg_.header.frame_id = xFrameId;
      vehicle_twist_msg_.heading_rate = xControlSignal.fHeadingRate;
      vehicle_twist_msg_.lateral_velocity = xControlSignal.fLatSpeed;
      vehicle_twist_msg_.longitudinal_velocity = xControlSignal.fLongSpeed;

      // steering_status_msg_ data
      steering_status_msg_.stamp = clock_msg_.clock;
      steering_status_msg_.steering_tire_angle = xControlSignal.fSteeringStatus;

      osMutexRelease(MutexControlSignalHandle);

      // Publishing in Autoware topics
      rcl_publish(&vehicle_twist_pub_, &vehicle_twist_msg_, NULL);
      rcl_publish(&steering_status_pub_, &steering_status_msg_, NULL);
      // Reseting subscribers flags
    }
    
    ucSubscribersRecieved = 0;

  }

}
