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
        Pin_Red_Write( ~Pin_Red_Read() );
        CyDelay(1000);
        Pin_Red_Write( ~Pin_Red_Read() );
        Pin_Green_Write( ~Pin_Green_Read() );
        CyDelay(1000);
        Pin_Green_Write( ~Pin_Green_Read() );
    }
}

/* [] END OF FILE */
