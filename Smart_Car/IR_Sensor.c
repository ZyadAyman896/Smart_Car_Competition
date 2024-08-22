/*
 * IR_Sensor.c
 *
 *  Created on: Jul 9, 2024
 *      Author: Zyad Montaser
 */

#include "IR_Sensor.h"
#include "gpio.h"

void IR_Sensor_Init(void)
{
	/* configure the OUT pin as input */
	GPIO_setupPinDirection(OUT_PORT_ID,OUT_PIN_ID,PIN_INPUT);
}

uint8 IR_Sensor_Reading(void)
{
	/* if the ir sensor detect an object */
	if(GPIO_readPin(OUT_PORT_ID,OUT_PIN_ID)==LOGIC_LOW)
	{
		return detect;
	}
	else
	{
		return Undetect;
	}
}
