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
    uint8 compare=0;
    uint8 i2cbuf[1];
    i2cbuf[0]=0;
    
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    PWM_Start();
    I2C_Start();
    I2C_EzI2CSetBuffer1(1,1,i2cbuf);
    
    for(;;)
    {
        if (compare != i2cbuf[0] )
        {
            compare= i2cbuf[0];
            PWM_WriteCompare(compare);
        }
    }
}

/* [] END OF FILE */
