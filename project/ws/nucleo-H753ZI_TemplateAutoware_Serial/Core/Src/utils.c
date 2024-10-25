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


unsigned char * cGetStringFromControlAction(control_action xControlActionTx)
{
  unsigned char * tx_msg = NULL;

  float_bytes xThrottle;
  float_bytes xSteering;
  float_bytes xBrake;

  xThrottle.fFloat = xControlActionTx.fTrottle;
  xSteering.fFloat = xControlActionTx.fSteeringAngle;
  xBrake.fFloat = xControlActionTx.fBrake;

  sprintf((char * )tx_msg, "#T%c%c%c%cS%c%c%c%cB%c%c%c%cH%cR%cG%cM%c$",
		  xThrottle.ucBytes[0], xThrottle.ucBytes[1], xThrottle.ucBytes[2], xThrottle.ucBytes[3],
		  xSteering.ucBytes[0], xSteering.ucBytes[1], xSteering.ucBytes[2], xSteering.ucBytes[3],
		  xBrake.ucBytes[0], xBrake.ucBytes[1], xBrake.ucBytes[2], xBrake.ucBytes[3],
		  xControlActionTx.ucHandBrake,
		  xControlActionTx.ucReverse,
		  xControlActionTx.ucGear,
		  xControlActionTx.ucManualGearShift);

  return tx_msg;
}


unsigned char ucGetVehicleStatusFromString(vehicle_status * xVehicleStatusRx, unsigned char * ucStringRx, unsigned char * ucSmState)
{

  for(int i = 0; i < strlen((char * )ucStringRx); i++)
  {
    switch (* ucSmState)
    {
      case 0:
        if('#' == ucStringRx[i])
        {
          * ucSmState = 1;
        }
        break;
      
      case 1:
        switch (ucStringRx[i])
        {
          case 'A':
            * ucSmState = 10;
            break;

          case 'B':
            * ucSmState = 20;
            break;

          case 'C':
            * ucSmState = 30;
            break;

          case 'D':
            * ucSmState = 40;
            break;

          case '$':
            * ucSmState = 0;
            return 1;
            break;
                
          default:
              break;
        }
        break;

      case 10:
        xVehicleStatusRx->fLongSpeed.ucBytes[0] = ucStringRx[i];
        * ucSmState = 11;
        break;

      case 11:
        xVehicleStatusRx->fLongSpeed.ucBytes[1] = ucStringRx[i];
        * ucSmState = 12;
        break;

      case 12:
        xVehicleStatusRx->fLongSpeed.ucBytes[2] = ucStringRx[i];
        * ucSmState = 13;
        break;

      case 13:
        xVehicleStatusRx->fLongSpeed.ucBytes[3] = ucStringRx[i];
        * ucSmState = 1;
        break;

      case 20:
        xVehicleStatusRx->fLatSpeed.ucBytes[0] = ucStringRx[i];
        * ucSmState = 21;
        break;

      case 21:
        xVehicleStatusRx->fLatSpeed.ucBytes[1] = ucStringRx[i];
        * ucSmState = 22;
        break;

      case 22:
        xVehicleStatusRx->fLatSpeed.ucBytes[2] = ucStringRx[i];
        * ucSmState = 23;
        break;

      case 23:
        xVehicleStatusRx->fLatSpeed.ucBytes[3] = ucStringRx[i];
        * ucSmState = 1;
        break;

      case 30:
        xVehicleStatusRx->fLatSpeed.ucBytes[0] = ucStringRx[i];
        * ucSmState = 31;
        break;

      case 31:
        xVehicleStatusRx->fHeadingRate.ucBytes[1] = ucStringRx[i];
        * ucSmState = 32;
        break;

      case 32:
        xVehicleStatusRx->fHeadingRate.ucBytes[2] = ucStringRx[i];
        * ucSmState = 33;
        break;

      case 33:
        xVehicleStatusRx->fHeadingRate.ucBytes[3] = ucStringRx[i];
        * ucSmState = 1;
        break;

      case 40:
        xVehicleStatusRx->ucGear = ucStringRx[i];
        * ucSmState = 1;
        break;


      default:
          break;
    }
  }
  return 0;
}
