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
    Pin_SW2_ClearInterrupt();    
}

int main()
{
    CyGlobalIntEnable;  /* Enable global interrupts */
    
    UART_Start();
    
    Pin_SW2_Int_StartEx( Pin_SW2_Handler );
    
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    
    for(;;)
    {
        CyDelay(5000);
        UART_UartPutString("Sleeping...\r\n");
        Timer_Start();
        CySysPmSleep();
        UART_UartPutString("AWAKE! \r\n");
    }
}
