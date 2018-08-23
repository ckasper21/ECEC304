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
    uint8 status;
    uint8 oldstatus;
    
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    UART_Start();
    
    for(;;)
    {
        status= Status_Read();
        if (status!=oldstatus)
        {
            oldstatus=status;
            UART_UartPutChar('0' + status );
            UART_UartPutChar('\r');
        }
    }
}

/* [] END OF FILE */
