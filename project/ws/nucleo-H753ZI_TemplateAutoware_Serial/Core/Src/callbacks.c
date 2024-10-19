
#include "autoware.h"


// Subscriptors callbacks
void control_cmd_callback(const void * xMsgIn)
{
  control_cmd_msg_ = * xMsgIn;
}

void gear_cmd_callback(const void * xMsgIn)
{
  gear_cmd_msg_ = * xMsgIn;
}

void turn_indicators_cmd_callback(const void * xMsgIn)
{
  turn_indicators_cmd_msg_ = * xMsgIn;
}

void hazard_lights_cmd_callback(const void * xMsgIn)
{
  hazard_lights_cmd_msg_ = * xMsgIn;
}

void actuation_cmd_callback(const void * xMsgIn)
{
  actuation_cmd_msg_ = * xMsgIn;
}

void emergency_callback(const void * xMsgIn)
{
  emergency_msg_ = * xMsgIn;
}

void control_mode_cmd_callback(const void * xRequestMsg, void * xResponseMsg)
{

}

// TODO: Publish callbacks
