/*
 * Smart_Car.c
 *
 *  Created on: Jul 8, 2024
 *      Author: Zyad Montaser
 */

#include "Smart_Car.h"
#include "pwm.h"
#include "Motor.c"
#include "lcd.h"
#include <util/delay.h> /* for delay function*/

int main()
{
	//uint8 front_Ultrasonic_reading;
	//uint8 right_Ultrasonic_reading;
	//uint8 left_Ultrasonic_reading;
	//uint8 IR_read;
	//IR_Sensor_Init();
	DcMotors_Init();
	PWM_Timer2_Generate(80);
	PWM_Timer0_Generate(80);

	//IR_Sensor_Init();
	//LCD_displayString("IR ");

	while(1)
	{
		Move_Forward();
//		IR_read=IR_Sensor_Reading();
//		if(IR_read==detect)
//		{
//			LCD_moveCursor(0,3);
//			LCD_displayString("not detect");
//		}
//		else if(IR_read==Undetect)
//		{
//			LCD_moveCursor(0,3);
//			LCD_displayString("detect    ");
//		}
//		_delay_ms(300);
	}
}

/*operate all the motors with the same speed and clockwise*/
void Move_Forward(void)
{
	Up_Right_DC_Motor_Rotate(DcMotor_CW);
	Down_Right_DC_Motor_Rotate(DcMotor_CW);

	Up_Left_DC_Motor_Rotate(DcMotor_CW);
	Down_Left_DC_Motor_Rotate(DcMotor_CW);
}

/*operate all the motors with the same speed and anti-clockwise*/
void Move_Backward(void)
{
	Up_Right_DC_Motor_Rotate(DcMotor_A_CW);
	Down_Right_DC_Motor_Rotate(DcMotor_A_CW);

	Up_Left_DC_Motor_Rotate(DcMotor_A_CW);
	Down_Left_DC_Motor_Rotate(DcMotor_A_CW);
}

/* to move left:
 * operate the left motors with the lower speed and clockwise
 * and the right motors with the higher speed and also clockwise
 *
 * to move right:
 * operate the right motors with the lower speed and clockwise
 * and the left motors with the higher speed and also clockwise
 * */
void Move_Left_Or_Right(void)
{
	Up_Right_DC_Motor_Rotate(DcMotor_CW);
	Down_Right_DC_Motor_Rotate(DcMotor_CW);

	Up_Left_DC_Motor_Rotate(DcMotor_CW);
	Down_Left_DC_Motor_Rotate(DcMotor_CW);
}

void Move_Left(void)
{
	Up_Right_DC_Motor_Rotate(DcMotor_CW);
	Down_Right_DC_Motor_Rotate(DcMotor_CW);

	Up_Left_DC_Motor_Rotate(DcMotor_A_CW);
	Down_Left_DC_Motor_Rotate(DcMotor_A_CW);
}

void Move_Right(void)
{
	Up_Right_DC_Motor_Rotate(DcMotor_A_CW);
	Down_Right_DC_Motor_Rotate(DcMotor_A_CW);

	Up_Left_DC_Motor_Rotate(DcMotor_CW);
	Down_Left_DC_Motor_Rotate(DcMotor_CW);
}

/*stop all the motors*/
void Stop(void)
{
	Up_Right_DC_Motor_Rotate(DcMotor_OFF);
	Down_Right_DC_Motor_Rotate(DcMotor_OFF);

	Up_Left_DC_Motor_Rotate(DcMotor_OFF);
	Down_Left_DC_Motor_Rotate(DcMotor_OFF);
}
