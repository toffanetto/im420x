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
  unsigned int uiGear;
  unsigned char ucControlMode;
} control_action;


/**
  * @name   control_action
  * @brief  Struct with vehicle control data compressed for MicroAutoware
  *         and CARLA.
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

#endif  /* UTILS_H_ */
