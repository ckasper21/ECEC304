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

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
    {
        /* Changing duty cycle to 70% (meaning
        the pin is on longer then off), period is 2 secs */
        
        Pin_Blue_Write( ~ Pin_Blue_Read() );
        CyDelay( 14 );
        Pin_Blue_Write( ~ Pin_Blue_Read() );
        CyDelay( 6 );
    }
}

/* [] END OF FILE */
