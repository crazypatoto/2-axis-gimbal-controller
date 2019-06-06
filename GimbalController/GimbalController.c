/***********************************************************************/
/*                                                                     */
/*  FILE        :GimbalController.c                                    */
/*  DATE        :Thu, May 30, 2019                                     */
/*  DESCRIPTION :Main Program                                          */
/*  CPU TYPE    :RX62T                                                 */
/*                                                                     */
/*  This file is generated by Renesas Project Generator (Ver.4.51).    */
/*  NOTE:THIS IS A TYPICAL EXAMPLE.                                    */
/*                                                                     */
/***********************************************************************/
#include "Delay.h"
#include "I2C.h"
#include "UART.h"
#include "PWM.h"
#include "MPU6050.h"
#include "PID.h"
#include "LED.h"

//#include "typedefine.h"
#ifdef __cplusplus
//#include <ios>                        // Remove the comment when you use ios
//_SINT ios_base::Init::init_cnt;       // Remove the comment when you use ios
#endif

float theta_Pitch = 0;
float theta_Roll = 0;
float deviation_Pitch = 0;
float deviation_Roll = 0;
float PRY[3] = {0.0};
int DMPReady_flag = 0;
int LOG_flag = 0;

void main(void);
#ifdef __cplusplus
extern "C"
{
    void abort(void);
}
#endif

void main(void)
{
    R_PG_Clock_Set();

    InitialDelay();
    InitialLED();
    InitialI2C();
    InitialUART();
    
    SetLED1(1);     //Power-On
    DMP_Init();
    SetLED2(1);     //Initialized    
    //delay_ms(5000);

    InitialPWMs();
    EnablePWM_A();
    EnablePWM_B();

    PID_Initial(&pid_Pitch);
    PID_Initial(&pid_Roll);
    pid_Pitch.Kp = 0.02;
    pid_Pitch.Ki = 0.025;
    pid_Pitch.Kd = 1;
    pid_Pitch.UpperLimit = 10.0;
    pid_Pitch.LowerLimit = -10.0;
    pid_Roll.Kp = 0.6;
    pid_Roll.Ki = 0.05;
    pid_Roll.Kd = 5.0;
    pid_Roll.UpperLimit = 10.0;
    pid_Roll.LowerLimit = -10.0;
    LOG("Start While Loop.....\r\n");

    R_PG_ExtInterrupt_Set_IRQ0();       //Enable DMP interrupt
    while (1)
    {

        if (DMPReady_flag)
        {
            DMPReady_flag = 0;
            if (Read_DMP(&PRY[0], &PRY[1], &PRY[2]) == 0)
            {
                if ((PRY[1] < 0) && (PRY[1] >= -180))
                {
                    PRY[1] += 180;
                }
                else
                {
                    PRY[1] -= 180;
                }

                pid_Pitch.ActualAngle = PRY[1];
                theta_Pitch += PID_Increase_Pitch(90 + deviation_Pitch);
                calcPWM_A_Sine(theta_Pitch);

                pid_Roll.ActualAngle = PRY[0];
                theta_Roll += PID_Increase_Roll(deviation_Roll);
                calcPWM_B_Sine(theta_Roll);

                // if (LOG_flag)
                //     LOG("CP:%f,MP:%f,CR:%f,MR:%f\r\n", PRY[1], theta_Pitch, PRY[0], theta_Roll);

                // LOG_flag ^= 1;                
            }            
        }
    }
}

void Irq0IntFunc(void)
{
    DMPReady_flag = 1;
}

void Irq1IntFunc(void)
{
}

#ifdef __cplusplus
void abort(void)
{
}
#endif
