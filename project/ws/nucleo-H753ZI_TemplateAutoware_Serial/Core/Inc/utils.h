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
  float fTrottle;
  float fBrake;
  float fSteeringAngle;
  unsigned char ucHandBrake;
  unsigned char ucReverse;
  unsigned char ucManualGearShift;
  unsigned char ucGear;
  unsigned char ucControlMode;
} control_action;


/**
  * @name   vehicle_status
  * @brief  Struct with vehicle status information recieved from CARLA.
  */
typedef struct{
  float_bytes fLongSpeed;
  float_bytes fLatSpeed;
  float_bytes fHeadingRate;
  unsigned char ucGear;
} vehicle_status;


/**
  * @name   control_signal
  * @brief  Struct with vehicle control data compressed for CARLA.
  */
typedef struct{
  float fTrottle;
  float fBrake;
  float fSteeringAngle;
  unsigned char ucHandBrake;
  unsigned char ucReverse;
  unsigned char ucManualGearShift;
  unsigned int uiGear;
  float fVelocity;
  float fAcceleraton;
  float fOrientation;
} control_signal;


#define AUTOWARE 1
#define MANUAL 2

/**
  * @name   fGetJoyPostition
  * @brief  Calculate the position of the joystick in [-1, 1] intervals.
  * @param  uiValue:  Analog value for axis
  *         uiRef0:   Analog zero value
  *         uiRefMax: Analog value for axis maximum limit.
  *         uiRefMin: Analog value for axis minimum limit.
  * @retval Float value with joystick position between -1 and 1.
  */
float fGetJoyPostition(unsigned int uiValue, unsigned int uiRef0, unsigned int uiRefMax, unsigned int uiRefMin);


unsigned char * cGetStringFromControlAction(control_action xControlActionTx);


unsigned char ucGetVehicleStatusFromString(vehicle_status * xVehicleStatusRx, unsigned char * ucStringRx, unsigned char * ucSmState);

#endif  /* UTILS_H_ */
