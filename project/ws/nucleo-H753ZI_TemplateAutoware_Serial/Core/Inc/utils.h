/**
  ******************************************************************************
  * @file    utils.c
  * @brief   This file contains the headers of utilities functions used in the
  *          project.
  ******************************************************************************
  * @author  Gabriel Toffanetto França da Rocha
  *          Laboratory of Autonomous Vehicles (LMA) - FEM/Unicamp
  * @date    Created:  October 23, 2024
  *          Modified:
  ******************************************************************************
  */

#ifndef UTILS_H_
#define UTILS_H_

#include <stdio.h>
#include <string.h>
#include "cmsis_os.h"
#include "main.h"

/**
  * @name   float_bytes
  * @brief  Union to send float through UART.
  */
typedef union{
  float fFloat;
  unsigned char ucBytes[4];
} float_bytes;

/**
  * @name   control_action
  * @brief  Struct with Autoware recieved data compressed for TaskControle.
  */
typedef struct{
  float_bytes xSteeringAngle;
  float_bytes xSteeringVelocity;
  float_bytes xSpeed;
  float_bytes xAcceleration;
  float_bytes xJerk;
  unsigned char ucControlMode;
} control_action;


/**
  * @name   vehicle_status
  * @brief  Struct with vehicle status information recieved from CARLA.
  */
typedef struct{
  float_bytes xLongSpeed;
  float_bytes xLatSpeed;
  float_bytes xHeadingRate;
  float_bytes xSteeringStatus;
} vehicle_status;


/**
  * @name   control_signal
  * @brief  Struct with vehicle control data compressed for CARLA.
  */
typedef struct{
  float fThrottle;
  float fBrake;
  float fSteeringAngle;
  unsigned char ucHandBrake;
  unsigned char ucReverse;
  unsigned char ucManualGearShift;
  unsigned char ucGear;
  unsigned char ucControlMode;
  float fLongSpeed;
  float fLatSpeed;
  float fHeadingRate;
  float fSteeringStatus;
} control_signal;

// Dead-band for joystick zero
#define JOY_DEAD_BAND 500

// Driving mode
#define EMERGENCY 0
#define AUTOWARE 1
#define MANUAL 4

// ThreadFlags
#define TO_AUTOWARE_MODE_FLAG 0x01
#define TO_MANUAL_MODE_FLAG 0x10
#define TO_EMERGENCY_MODE_FLAG 0x1000000
#define DATA_UPDATED_FLAG 0x100
#define JOYSW_FLAG 0x1000
#define UART_NEW_DATA_FLAG 0x10000
#define MICRO_ROS_AGENT_ONLINE_FLAG 0x100000 

// Check flag macro for bitwise comparison of ThreadFlags
#define CHECK_FLAG(flag, input) ((flag & input) == flag && !(input >> 31))

/**
  * @name   fGetJoyPostition
  * @brief  Calculate the position of the joystick in [-1, 1] intervals.
  * @param  uiValue:  Analog value for axis
  * @param  uiRef0:   Analog zero value
  * @param  uiRefMax: Analog value for axis maximum limit.
  * @param  uiRefMin: Analog value for axis minimum limit.
  * @retval Float value with joystick position between -1 and 1.
  */
float fGetJoyPostition(unsigned int uiValue, unsigned int uiRef0, unsigned int uiRefMax, unsigned int uiRefMin);


/**
  * @name   ucGetStringFromControlAction
  * @brief  Converts the compressed data in control_action form to string in form
  *         #T%c%c%c%cS%c%c%c%cB%c%c%c%cH%cR%cG%cM%c$
  * @param  xControlActionTx: Compressed data with information to CARLA.
  * @param  ucTxMsg: Formated msg to be transmitted.
  * @retval None.
  */
void vGetStringFromControlAction(control_action xControlActionTx, unsigned char * ucTxMsg);

/**
  * @name   vDrivingModeLights
  * @brief  Update driving mode signaling lights
  * @param  ucDrivingMode:  Driving mode
  * @retval None
  */
void vDrivingModeLights(unsigned char ucDrivingMode);

#endif  /* UTILS_H_ */
