#include "mcc_generated_files/mcc.h"

#ifndef _XTAL_FREQ
#define _XTAL_FREQ 16000000
#endif

#define DELAY_COUNTS (5000000U)

void main(void)
{
    // Initialize the device
    SYSTEM_Initialize();

    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global Interrupts
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    uint16_t dutyVal = 0;
    
    while (1)
    {
        RELAY_1_SetHigh();
        RELAY_2_SetHigh();
        RELAY_3_SetHigh();
        RELAY_4_SetHigh();
        MOTOR_1_SetHigh();
        MOTOR_2_SetHigh();

                
    }
}
/**
 End of File
*/