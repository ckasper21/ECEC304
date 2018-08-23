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
    int compare=500;
    for(;;)
    {
        PWM_WriteCompare(compare);
        CyDelay(50);
        compare=compare*1.01;
    }
}

/* [] END OF FILE */
