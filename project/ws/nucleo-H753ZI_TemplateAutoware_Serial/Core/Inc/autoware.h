
#ifndef AUTOWARE_H_
#define AUTOWARE_H_

#define NODE_NAME "vehicle_interface"

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


// Task prototype
void StartTaskMicroROS(void *argument);

// MicroROS FunctionPrototypes -- START
bool cubemx_transport_open(struct uxrCustomTransport * transport);
bool cubemx_transport_close(struct uxrCustomTransport * transport);
size_t cubemx_transport_write(struct uxrCustomTransport* transport, const uint8_t * buf, size_t len, uint8_t * err);
size_t cubemx_transport_read(struct uxrCustomTransport* transport, uint8_t* buf, size_t len, int timeout, uint8_t* err);

void * microros_allocate(size_t size, void * state);
void microros_deallocate(void * pointer, void * state);
void * microros_reallocate(void * pointer, size_t size, void * state);
void * microros_zero_allocate(size_t number_of_elements, size_t size_of_element, void * state);

// Subscriptors callbacks
void control_cmd_callback(const void * msgin);
void gear_cmd_callback(const void * msgin);
void turn_indicators_cmd_callback(const void * msgin);
void hazard_lights_cmd_callback(const void * msgin);
void actuation_cmd_callback(const void * msgin);
void emergency_callback(const void * msgin);

// MicroROS FunctionPrototypes -- END


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

rclc_executor_t executor;

#endif /* AUTOWARE_H_ */
