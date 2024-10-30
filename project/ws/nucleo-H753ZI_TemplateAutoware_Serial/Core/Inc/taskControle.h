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
#define TIMEOUT_GET_CONTROL_ACTION 30

// UART RX DMA BUFFER SIZE
#define UART2_DMA_BUFFER_SIZE 1

#define MSG_TO_CARLA_SIZE 26

#define MAX_VEHICLE_GET_DATA_ATTEMPTS 5

// Vehicle limits
#define MAX_TROTTLE 100
#define MAX_BRAKE 100
#define MAX_STEERING_ANGLE 0.5235989 // pi/6


#endif  /* TASKCONTROLE_H_ */
