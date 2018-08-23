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
#include <stdio.h>

int main()
{   
    CyGlobalIntEnable; /* Enable global interrupts. */
    UART_Start();
    CapSense_Start();
    CapSense_InitializeAllBaselines();
    CapSense_ScanEnabledWidgets();
    int tpress=0,bpress=0;
    
    for(;;)
    {   
        if (!CapSense_IsBusy())
        { 
            if (CapSense_CheckIsSensorActive(CapSense_SENSOR_BUTTON0__BTN))
            {
                if (tpress==0)
                {
                   UART_UartPutString("Top Button Pressed!\r\n");  
                   tpress=1;
                }
            }
            
            if (! CapSense_CheckIsSensorActive(CapSense_SENSOR_BUTTON0__BTN) && tpress==1)
            {
                UART_UartPutString("Top Button Released!\r\n");
                tpress=0;
            }
            
            if (CapSense_CheckIsSensorActive(CapSense_SENSOR_BUTTON1__BTN))
            {
                if (bpress==0)
                {
                   UART_UartPutString("Bottom Button Pressed!\r\n");  
                   bpress=1;
                }
            }
            
            if (! CapSense_CheckIsSensorActive(CapSense_SENSOR_BUTTON1__BTN) && bpress==1)
            {
                UART_UartPutString("Bottom Button Released!\r\n");
                bpress=0;
            }
            
            CapSense_UpdateEnabledBaselines();
            CapSense_ScanEnabledWidgets();
        }    
    }
}

/* [] END OF FILE */
