/*
 * IR_Sensor.h
 *
 *  Created on: Jul 9, 2024
 *      Author: Zyad Montaser
 */

#ifndef IR_SENSOR_H_
#define IR_SENSOR_H_

#include "std_types.h"

#define OUT_PORT_ID    PORTB_ID /*the number of the port that the OUT pin connected with*/
#define OUT_PIN_ID	   PIN7_ID  /*the number of the pin that the OUT pin connected with*/

#define detect		   0
#define Undetect       1

/* function to configure the OUT pin as input and initially output 1 (Undetect) */
void IR_Sensor_Init(void);

/*function to read the ir sensor response*/
uint8 IR_Sensor_Reading(void);

#endif /* IR_SENSOR_H_ */
