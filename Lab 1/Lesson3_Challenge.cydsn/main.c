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
CY_ISR ( Pin_SW2_Handler )
{
    
    Pin_Red_Write(~ Pin_Red_Read() );
    Pin_SW2_ClearInterrupt();
    Pin_Blue_Write(~ Pin_Red_Read() );
    Pin_SW2_ClearInterrupt();
    
    
}
int main()
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    Pin_SW2_Int_StartEx( Pin_SW2_Handler );

    for(;;)
    {
        /* No code */
    }
}

/* [] END OF FILE */
