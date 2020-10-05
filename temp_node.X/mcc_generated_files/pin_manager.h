/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.6
        Device            :  PIC18F26K83
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.30 and above
        MPLAB 	          :  MPLAB X 5.40	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set TEMP_1 aliases
#define TEMP_1_TRIS                 TRISAbits.TRISA0
#define TEMP_1_LAT                  LATAbits.LATA0
#define TEMP_1_PORT                 PORTAbits.RA0
#define TEMP_1_WPU                  WPUAbits.WPUA0
#define TEMP_1_OD                   ODCONAbits.ODCA0
#define TEMP_1_ANS                  ANSELAbits.ANSELA0
#define TEMP_1_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define TEMP_1_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define TEMP_1_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define TEMP_1_GetValue()           PORTAbits.RA0
#define TEMP_1_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define TEMP_1_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define TEMP_1_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define TEMP_1_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define TEMP_1_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define TEMP_1_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define TEMP_1_SetAnalogMode()      do { ANSELAbits.ANSELA0 = 1; } while(0)
#define TEMP_1_SetDigitalMode()     do { ANSELAbits.ANSELA0 = 0; } while(0)

// get/set TEMP_2 aliases
#define TEMP_2_TRIS                 TRISAbits.TRISA1
#define TEMP_2_LAT                  LATAbits.LATA1
#define TEMP_2_PORT                 PORTAbits.RA1
#define TEMP_2_WPU                  WPUAbits.WPUA1
#define TEMP_2_OD                   ODCONAbits.ODCA1
#define TEMP_2_ANS                  ANSELAbits.ANSELA1
#define TEMP_2_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define TEMP_2_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define TEMP_2_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define TEMP_2_GetValue()           PORTAbits.RA1
#define TEMP_2_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define TEMP_2_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define TEMP_2_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define TEMP_2_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define TEMP_2_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define TEMP_2_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define TEMP_2_SetAnalogMode()      do { ANSELAbits.ANSELA1 = 1; } while(0)
#define TEMP_2_SetDigitalMode()     do { ANSELAbits.ANSELA1 = 0; } while(0)

// get/set TEMP_3 aliases
#define TEMP_3_TRIS                 TRISAbits.TRISA2
#define TEMP_3_LAT                  LATAbits.LATA2
#define TEMP_3_PORT                 PORTAbits.RA2
#define TEMP_3_WPU                  WPUAbits.WPUA2
#define TEMP_3_OD                   ODCONAbits.ODCA2
#define TEMP_3_ANS                  ANSELAbits.ANSELA2
#define TEMP_3_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define TEMP_3_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define TEMP_3_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define TEMP_3_GetValue()           PORTAbits.RA2
#define TEMP_3_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define TEMP_3_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define TEMP_3_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define TEMP_3_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define TEMP_3_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define TEMP_3_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define TEMP_3_SetAnalogMode()      do { ANSELAbits.ANSELA2 = 1; } while(0)
#define TEMP_3_SetDigitalMode()     do { ANSELAbits.ANSELA2 = 0; } while(0)

// get/set TEMP_4 aliases
#define TEMP_4_TRIS                 TRISAbits.TRISA3
#define TEMP_4_LAT                  LATAbits.LATA3
#define TEMP_4_PORT                 PORTAbits.RA3
#define TEMP_4_WPU                  WPUAbits.WPUA3
#define TEMP_4_OD                   ODCONAbits.ODCA3
#define TEMP_4_ANS                  ANSELAbits.ANSELA3
#define TEMP_4_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define TEMP_4_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define TEMP_4_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define TEMP_4_GetValue()           PORTAbits.RA3
#define TEMP_4_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define TEMP_4_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define TEMP_4_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define TEMP_4_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define TEMP_4_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define TEMP_4_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define TEMP_4_SetAnalogMode()      do { ANSELAbits.ANSELA3 = 1; } while(0)
#define TEMP_4_SetDigitalMode()     do { ANSELAbits.ANSELA3 = 0; } while(0)

// get/set RB4 procedures
#define RB4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define RB4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define RB4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define RB4_GetValue()              PORTBbits.RB4
#define RB4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define RB4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define RB4_SetPullup()             do { WPUBbits.WPUB4 = 1; } while(0)
#define RB4_ResetPullup()           do { WPUBbits.WPUB4 = 0; } while(0)
#define RB4_SetAnalogMode()         do { ANSELBbits.ANSELB4 = 1; } while(0)
#define RB4_SetDigitalMode()        do { ANSELBbits.ANSELB4 = 0; } while(0)

// get/set RB5 procedures
#define RB5_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define RB5_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define RB5_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define RB5_GetValue()              PORTBbits.RB5
#define RB5_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define RB5_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define RB5_SetPullup()             do { WPUBbits.WPUB5 = 1; } while(0)
#define RB5_ResetPullup()           do { WPUBbits.WPUB5 = 0; } while(0)
#define RB5_SetAnalogMode()         do { ANSELBbits.ANSELB5 = 1; } while(0)
#define RB5_SetDigitalMode()        do { ANSELBbits.ANSELB5 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/