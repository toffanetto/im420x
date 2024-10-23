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

#define AUTOWARE 1
#define MANUAL 2

// Vehicle limits
#define MAX_TROTTLE 100
#define MAX_BRAKE 100
#define MAX_STEERING_ANGLE 0.5235989 // pi/6


#endif  /* TASKCONTROLE_H_ */
