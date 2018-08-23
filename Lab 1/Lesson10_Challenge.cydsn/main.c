/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include <project.h>

int main()
{
    uint8 compare1=0;
    uint8 compare2=0;
    uint8 i2cbuf[2];
    i2cbuf[0]=0;
    i2cbuf[1]=0;
    
    CyGlobalIntEnable; /* Enable global interrupts. */
    PWM_Start();
    PWM_1_Start();
    I2C_Start();
    I2C_EzI2CSetBuffer1(2,2,i2cbuf);
    
    for(;;)
    {
        if (compare1 != i2cbuf[0] || compare2 != i2cbuf[1])
        {
            compare1= i2cbuf[0];
            PWM_WriteCompare(compare1);
            compare2= i2cbuf[1];
            PWM_1_WriteCompare(compare2);     
        }
    }
}

/* [] END OF FILE */
