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
  return (uiValue - uiRef0 > 0) ? (uiValue - uiRef0)/((float)(uiRefMax - uiRef0)) : (uiValue - uiRef0)/((float)(uiRef0 - uiRefMin));
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

/**
  * @name   ucGetVehicleStatusFromString
  * @brief  Converts the message recieved by UART in vehicle_status compressed data,
  *         using a state macine
  * @param  xVehicleStatusRx: Compressed data with information to CARLA.
  * @param  ucStringRx: RX Message.
  * @param  ucSmState: State machine state.
  * @param  ucBufferSize: DMA buffer size.
  * @retval String casted in uc that will be send in serial.
  */
unsigned char ucGetVehicleStatusFromString(vehicle_status * xVehicleStatusRx, unsigned char * ucStringRx, unsigned char ucBufferSize)
{
  unsigned char ucSmState = 0;
  unsigned char ucDataProcessed = 0;
  unsigned char ucIndex = 0;

  while(ucDataProcessed < strlen(ucStringRx))
  {
    switch (ucSmState)
    {
      case 0:
        if('#' == ucStringRx[ucIndex])
        {
          ucSmState = 1;
          ucDataProcessed = 0;
        }
        break;
      
      case 1:
        switch (ucStringRx[ucIndex])
        {
          case 'A':
            ucSmState = 10;
            break;

          case 'B':
            ucSmState = 20;
            break;

          case 'C':
            ucSmState = 30;
            break;

          case 'D':
            ucSmState = 40;
            break;

          case '$':
            ucSmState = 0;
            return 1;
            break;
                
          default:
              break;
        }
        break;

      case 10:
        xVehicleStatusRx->xLongSpeed.ucBytes[0] = ucStringRx[ucIndex];
        ucSmState = 11;
        break;

      case 11:
        xVehicleStatusRx->xLongSpeed.ucBytes[1] = ucStringRx[ucIndex];
        ucSmState = 12;
        break;

      case 12:
        xVehicleStatusRx->xLongSpeed.ucBytes[2] = ucStringRx[ucIndex];
        ucSmState = 13;
        break;

      case 13:
        xVehicleStatusRx->xLongSpeed.ucBytes[3] = ucStringRx[ucIndex];
        ucSmState = 1;
        break;

      case 20:
        xVehicleStatusRx->xLatSpeed.ucBytes[0] = ucStringRx[ucIndex];
        ucSmState = 21;
        break;

      case 21:
        xVehicleStatusRx->xLatSpeed.ucBytes[1] = ucStringRx[ucIndex];
        ucSmState = 22;
        break;

      case 22:
        xVehicleStatusRx->xLatSpeed.ucBytes[2] = ucStringRx[ucIndex];
        ucSmState = 23;
        break;

      case 23:
        xVehicleStatusRx->xLatSpeed.ucBytes[3] = ucStringRx[ucIndex];
        ucSmState = 1;
        break;

      case 30:
        xVehicleStatusRx->xHeadingRate.ucBytes[0] = ucStringRx[ucIndex];
        ucSmState = 31;
        break;

      case 31:
        xVehicleStatusRx->xHeadingRate.ucBytes[1] = ucStringRx[ucIndex];
        ucSmState = 32;
        break;

      case 32:
        xVehicleStatusRx->xHeadingRate.ucBytes[2] = ucStringRx[ucIndex];
        ucSmState = 33;
        break;

      case 33:
        xVehicleStatusRx->xHeadingRate.ucBytes[3] = ucStringRx[ucIndex];
        ucSmState = 1;
        break;

      case 40:
        xVehicleStatusRx->ucGear = ucStringRx[ucIndex];
        ucSmState = 1;
        break;


      default:
          break;
    }

    ucIndex = (ucIndex + 1) % ucBufferSize;
    ucDataProcessed++;

  }
  return 0;
}
