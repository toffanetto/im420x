/**
  ******************************************************************************
  * @file    taskControle.h
  * @brief   This file contains the declarations for the FreeRTOS task 
  *          taskControle, which make a control of a autonomous vehicle by the
  *          high level control action given by Autoware or manualy controled by
  *          a physical joysitck.
  ******************************************************************************
  * @author  Gabriel Toffanetto França da Rocha 
  *          Laboratory of Autonomous Vehicles (LMA) - FEM/Unicamp
  * @date    Created:  October 21, 2024
  *          Modified: 
  ******************************************************************************
  */
#ifndef TASKCONTROLE_H_
#define TASKCONTROLE_H_

#include "utils.h"
#include "main.h"
#include "cmsis_os.h"
#include "microAutoware.h"

// Timeout to wait control action
#define TIMEOUT_GET_CONTROL_ACTION 300

// Timeout to wait CARLA data
#define TIMEOUT_GET_CARLA_RX 200

// UART RX DMA BUFFER SIZE = MSG_RX_SIZE = 23 bytes
#define UART2_DMA_BUFFER_SIZE 23 // ! 23 or 22? Review

// Number of bytes of control message sent to CARLA.
#define MSG_TO_CARLA_SIZE 30

// Time period for wait between manual commands sent to CARLA.
#define MANUAL_CONTROL_TIME_COMMAND 200

// Vehicle limits to manual control
#define MAX_TROTTLE 1
#define MAX_BRAKE 1
#define MAX_STEERING_ANGLE 1 


#endif  /* TASKCONTROLE_H_ */
