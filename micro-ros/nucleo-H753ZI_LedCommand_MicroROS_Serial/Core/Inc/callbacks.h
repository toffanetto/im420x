//*******************************************************************************//
// School of Mechanics Engineering - State University of Camipinas (FEM/Unicamp) //
// File name: callbacks.h                                                        //
// File description: Header file for the callbacks of MicroROS task, for timers  //
//					 and subscriber topics.                                      //
// Author name:        Gabriel Toffanetto França da Rocha                        //
// Creation date:      Sep 30, 2024                                              //
// Revision date:      Sep 30, 2024                                              //
//*******************************************************************************//

#ifndef CALLBACKS_H
#define CALLBACKS_H


// Includes

#include <std_msgs/msg/u_int8_multi_array.h> // Message data structure
#include "main.h" // For use HAL functions

// Functions

//**********************************************************************************//
// Method name:        vLedCallback                                                 //
// Method description: This callback function os called by executor when a new data //
//					   arrives in /led_command topic, processing the message and    //
//					   controlling the LEDs.                                        //
// Input paramens:     xMsgIn <std_msgs__msg__UInt8MultiArray>                      //
//					   Message received by the subscriber.                          //
// Output paramens:    null                                                         //
//**********************************************************************************//
void vLedCallback(std_msgs__msg__UInt8MultiArray *);



#endif
