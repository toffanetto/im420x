/**
  ******************************************************************************
  * @file    executorCallbacks.c
  * @brief   This file contains all the callbacks functions from microAutoware
  *          task. Functions templates are in microAutoware.h.
  ******************************************************************************
  * @author  Gabriel Toffanetto França da Rocha 
  *          Laboratory of Autonomous Vehicles (LMA) - FEM/Unicamp
  * @date    Created:  October 9, 2024
  *          Modified: 
  ******************************************************************************
  */

#include "microAutoware.h"

// From microAutoware.c
extern unsigned int ucSubscribersRecieved;

// Subscriptors callbacks

/**
  * @name   control_cmd_callback
  * @brief  ROS topic subscriber callback to recieve the control commands and save in control_cmd_msg_
  * @param  xMsgIn: pointer to the message recieved in the topic.
  * @retval None
  */
void control_cmd_callback(const void * xMsgIn)
{
  const autoware_control_msgs__msg__Control * control_cmd_msg_ = (const autoware_control_msgs__msg__Control * )xMsgIn;
  ucSubscribersRecieved = ucSubscribersRecieved | (0x1 << 0);
}

/**
  * @name   gear_cmd_callback
  * @brief  ROS topic subscriber callback to recieve the gear command and save in gear_cmd_msg_
  * @param  xMsgIn: pointer to the message recieved in the topic.
  * @retval None
  */
void gear_cmd_callback(const void * xMsgIn)
{
  const autoware_vehicle_msgs__msg__GearCommand * gear_cmd_msg_ = (const autoware_vehicle_msgs__msg__GearCommand * )xMsgIn;
  ucSubscribersRecieved = ucSubscribersRecieved | (0x1 << 1);
}

/**
  * @name   turn_indicators_cmd_callback
  * @brief  ROS topic subscriber callback to recieve the turn lights commands and save in turn_indicators_cmd_msg_
  * @param  xMsgIn: pointer to the message recieved in the topic.
  * @retval None
  */
void turn_indicators_cmd_callback(const void * xMsgIn)
{
  const autoware_vehicle_msgs__msg__TurnIndicatorsCommand * turn_indicators_cmd_msg_ = (const autoware_vehicle_msgs__msg__TurnIndicatorsCommand * )xMsgIn;
  ucSubscribersRecieved = ucSubscribersRecieved | (0x1 << 2);
}

/**
  * @name   hazard_lights_cmd_callback
  * @brief  ROS topic subscriber callback to recieve the hazard lights commands and save in hazard_lights_cmd_msg_
  * @param  xMsgIn: pointer to the message recieved in the topic.
  * @retval None
  */
void hazard_lights_cmd_callback(const void * xMsgIn)
{
  const autoware_vehicle_msgs__msg__HazardLightsCommand * hazard_lights_cmd_msg_ = (const autoware_vehicle_msgs__msg__HazardLightsCommand * )xMsgIn;
  ucSubscribersRecieved = ucSubscribersRecieved | (0x1 << 3);
}

// ! optional topic, probabily will not be used.
/**
  * @name   actuation_cmd_callback
  * @brief  ROS topic subscriber callback to recieve the control commands and save in actuation_cmd_msg_
  * @param  xMsgIn: pointer to the message recieved in the topic.
  * @retval None
  */
void actuation_cmd_callback(const void * xMsgIn)
{
  const tier4_vehicle_msgs__msg__ActuationCommandStamped * actuation_cmd_msg_ = (const tier4_vehicle_msgs__msg__ActuationCommandStamped * )xMsgIn;
  ucSubscribersRecieved = ucSubscribersRecieved | (0x1 << 4);
}

// ! optional topic, probabily will not be used.
/**
  * @name   emergency_callback
  * @brief  ROS topic subscriber callback to recieve the control commands and save in emergency_msg_ 
  * @param  xMsgIn: pointer to the message recieved in the topic.
  * @retval None
  */
void emergency_callback(const void * xMsgIn)
{
  const tier4_vehicle_msgs__msg__VehicleEmergencyStamped * emergency_msg_ = (const tier4_vehicle_msgs__msg__VehicleEmergencyStamped * )xMsgIn;
  ucSubscribersRecieved = ucSubscribersRecieved | (0x1 << 5);
}

// TODO: CARLA callbacks

// Service callbacks


/**
  * @name   control_mode_cmd_callback
  * @brief  ROS service server callback to change the control mode and return a status about the change
  * @param  xMsgIn: pointer to the message recieved in the topic.
  * @retval None
  */
void control_mode_cmd_callback(const void * xRequestMsg, void * xResponseMsg)
{
  const autoware_vehicle_msgs__srv__ControlModeCommand_Request * control_mode_request_msg_ = (const autoware_vehicle_msgs__srv__ControlModeCommand_Request * )xRequestMsg;

  // TODO Send threadflag to TaskControle


  //xResponseMsg = &control_mode_response_msg_;
}
