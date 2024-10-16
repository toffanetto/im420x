//*******************************************************************************//
// School of Mechanics Engineering - State University of Camipinas (FEM/Unicamp) //
// File name: callbacks.c                                                        //
// File description: This main file is based in a code generated in STMCubeMX,   //
//                   for show the state of a NUCLEO built-in button (B1) in a    //
//                   built-in LED (LD2).                                         //
// Author name:        Gabriel Toffanetto França da Rocha                        //
// Creation date:      Aug 13, 2024                                              //
// Revision date:      Aug 14, 2024                                              //
//*******************************************************************************//

#include "callbacks.h"

//**********************************************************************************//
// Method name:        vLedCallback                                                 //
// Method description: This callback function os called by executor when a new data //
//					   arrives in /led_command topic, processing the message and    //
//					   controlling the LEDs.                                        //
// Input paramens:     xMsgIn <std_msgs__msg__UInt8MultiArray>                      //
//					   Message received by the subscriber.                          //
// Output paramens:    null                                                         //
//**********************************************************************************//
void vLedCallback(std_msgs__msg__UInt8MultiArray * xMsgIn)
  {

    const std_msgs__msg__UInt8MultiArray * xMsg = (const std_msgs__msg__UInt8MultiArray *)xMsgIn;

    HAL_GPIO_WritePin(LD1_GPIO_Port, LD1_Pin, xMsg->data.data[1]); // Settind LD1 state by the first position of the data vector in the message.
    HAL_GPIO_WritePin(LD2_GPIO_Port, LD2_Pin, xMsg->data.data[2]); // Settind LD2 state by the first position of the data vector in the message.
    HAL_GPIO_WritePin(LD3_GPIO_Port, LD3_Pin, xMsg->data.data[3]); // Settind LD3 state by the first position of the data vector in the message.

  }
