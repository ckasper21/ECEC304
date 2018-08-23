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
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    PWM_Start();
    
    for(;;)
    {
        PWM_WriteCompare(500);
        CyDelay(1000);
        PWM_WriteCompare(9500);
        CyDelay(1000);
    }
}

/* [] END OF FILE */
