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
    uint32 rxData;
    UART_Start();
  
    
    for(;;)
    {
       
        rxData=UART_UartGetChar();
        if(rxData>=97 && rxData<= 122 )
        {
            rxData=rxData-32;
            UART_UartPutChar(rxData);
        } else 
            {
                UART_UartPutChar(rxData);
            }
       
       
        
    }
}

/* [] END OF FILE */
