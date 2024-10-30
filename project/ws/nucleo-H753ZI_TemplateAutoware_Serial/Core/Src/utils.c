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
  * @param  uiRef0:   Analog zero value
  * @param  uiRefMax: Analog value for axis maximum limit.
  * @param  uiRefMin: Analog value for axis minimum limit.
  * @retval Float value with joystick position between -1 and 1.
  */
float fGetJoyPostition(unsigned int uiValue, unsigned int uiRef0, unsigned int uiRefMax, unsigned int uiRefMin)
{
  return ((int)(uiValue - uiRef0) > 0) ? ((int)(uiValue - uiRef0))/((float)(uiRefMax - uiRef0)) : ((int)(uiValue - uiRef0))/((float)(uiRef0 - uiRefMin));
}

/**
  * @name   ucGetStringFromControlAction
  * @brief  Converts the compressed data in control_action form to string in form
  *         #T%c%c%c%cS%c%c%c%cB%c%c%c%cH%cR%cG%cM%c$
  * @param  xControlActionTx: Compressed data with information to CARLA.
  * @param  ucTxMsg: Formated msg to be transmitted.
  * @retval None.
  */
void vGetStringFromControlAction(control_action xControlActionTx, unsigned char * ucTxMsg)
{
  float_bytes xThrottle;
  float_bytes xSteering;
  float_bytes xBrake;

  xThrottle.fFloat = xControlActionTx.fTrottle;
  xSteering.fFloat = xControlActionTx.fSteeringAngle;
  xBrake.fFloat = xControlActionTx.fBrake;

  ucTxMsg[0]  = (unsigned char)'#';
  ucTxMsg[1]  = (unsigned char)'T';
  ucTxMsg[2]  = xThrottle.ucBytes[0];
  ucTxMsg[3]  = xThrottle.ucBytes[1];
  ucTxMsg[4]  = xThrottle.ucBytes[2];
  ucTxMsg[5]  = xThrottle.ucBytes[3];
  ucTxMsg[6]  = (unsigned char)'S';
  ucTxMsg[7]  = xSteering.ucBytes[0];
  ucTxMsg[8]  = xSteering.ucBytes[1];
  ucTxMsg[9]  = xSteering.ucBytes[2];
  ucTxMsg[10] = xSteering.ucBytes[3];
  ucTxMsg[11] = (unsigned char)'B';
  ucTxMsg[12] = xBrake.ucBytes[0];
  ucTxMsg[13] = xBrake.ucBytes[1];
  ucTxMsg[14] = xBrake.ucBytes[2];
  ucTxMsg[15] = xBrake.ucBytes[3];
  ucTxMsg[16] = (unsigned char)'H';
  ucTxMsg[17] = xControlActionTx.ucHandBrake;
  ucTxMsg[18] = (unsigned char)'R';
  ucTxMsg[19] = xControlActionTx.ucReverse;
  ucTxMsg[20] = (unsigned char)'G';
  ucTxMsg[21] = xControlActionTx.ucGear;
  ucTxMsg[22] = (unsigned char)'M';
  ucTxMsg[23] = xControlActionTx.ucManualGearShift;
  ucTxMsg[24] = (unsigned char)'$';
  ucTxMsg[25] = (unsigned char)'\0';
  
}
