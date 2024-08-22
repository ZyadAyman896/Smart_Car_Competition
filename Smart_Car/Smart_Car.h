/*
 * Smart_Car.h
 *
 *  Created on: Jul 8, 2024
 *      Author: Zyad Montaser
 */

#ifndef SMART_CAR_H_
#define SMART_CAR_H_

#include "Motor.h"
#include "std_types.h"
#include "common_macros.h"
#include "gpio.h"
#include "IR_Sensor.h"
//#include "ultrasonic.h"

/*******************************************************************************
 *                                Definitions                                  *
 *******************************************************************************/


/*******************************************************************************
 *                             Types Declarations                              *
 *******************************************************************************/


/*******************************************************************************
 *                              Global Variables                               *
 *******************************************************************************/


/*******************************************************************************
 *                             Functions Prototypes                            *
 *******************************************************************************/

void Move_Forward(void);
void Move_Backward(void);
void Move_Left_Or_Right(void);
void Stop(void);

void Move_Left(void);
void Move_Right(void);

#endif /* SMART_CAR_H_ */
