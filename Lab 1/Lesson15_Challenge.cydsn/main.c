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

#define NUM_CHANNELS (4)

int main()
{
    uint8 ctlval=0;
    
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    PWM_Start();
    
    for(;;)
    {
        Control_Write(ctlval);
        
        ctlval++;
        if (ctlval >= NUM_CHANNELS)
        {
            ctlval=0;
        }
        CyDelay(500);
    }
}

/* [] END OF FILE */
