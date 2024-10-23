/**
  ******************************************************************************
  * @file    utils.c
  * @brief   This file contains utilities functions used in the project.
  ******************************************************************************
  * @author  Gabriel Toffanetto França da Rocha
  *          Laboratory of Autonomous Vehicles (LMA) - FEM/Unicamp
  * @date    Created:  October 23, 2024
  *          Modified:
  ******************************************************************************
  */

#include "utils.h"

/**
  * @name   fGetJoyPostition
  * @brief  Calculate the position of the joystick in [-1, 1] intervals.
  * @param  uiValue:  Analog value for axis
  *         uiRef0:   Analog zero value
  *         uiRefMax: Analog value for axis maximum limit.
  *         uiRefMin: Analog value for axis minimum limit.
  * @retval Float value with joystick position between -1 and 1.
  */
float fGetJoyPostition(unsigned int uiValue, unsigned int uiRef0, unsigned int uiRefMax, unsigned int uiRefMin)
{
	return (uiValue - uiRef0 > 0) ? (uiValue - uiRef0)/((float)(uiRefMax - uiRef0)) : (uiValue - uiRef0)/((float)(uiRef0 - uiRefMin));
}
