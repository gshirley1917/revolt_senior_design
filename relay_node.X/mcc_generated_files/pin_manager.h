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

// get/set RELAY_1 aliases
#define RELAY_1_TRIS                 TRISAbits.TRISA0
#define RELAY_1_LAT                  LATAbits.LATA0
#define RELAY_1_PORT                 PORTAbits.RA0
#define RELAY_1_WPU                  WPUAbits.WPUA0
#define RELAY_1_OD                   ODCONAbits.ODCA0
#define RELAY_1_ANS                  ANSELAbits.ANSELA0
#define RELAY_1_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define RELAY_1_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define RELAY_1_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define RELAY_1_GetValue()           PORTAbits.RA0
#define RELAY_1_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define RELAY_1_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define RELAY_1_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define RELAY_1_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define RELAY_1_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define RELAY_1_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define RELAY_1_SetAnalogMode()      do { ANSELAbits.ANSELA0 = 1; } while(0)
#define RELAY_1_SetDigitalMode()     do { ANSELAbits.ANSELA0 = 0; } while(0)

// get/set RELAY_2 aliases
#define RELAY_2_TRIS                 TRISAbits.TRISA1
#define RELAY_2_LAT                  LATAbits.LATA1
#define RELAY_2_PORT                 PORTAbits.RA1
#define RELAY_2_WPU                  WPUAbits.WPUA1
#define RELAY_2_OD                   ODCONAbits.ODCA1
#define RELAY_2_ANS                  ANSELAbits.ANSELA1
#define RELAY_2_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define RELAY_2_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define RELAY_2_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define RELAY_2_GetValue()           PORTAbits.RA1
#define RELAY_2_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define RELAY_2_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define RELAY_2_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define RELAY_2_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define RELAY_2_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define RELAY_2_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define RELAY_2_SetAnalogMode()      do { ANSELAbits.ANSELA1 = 1; } while(0)
#define RELAY_2_SetDigitalMode()     do { ANSELAbits.ANSELA1 = 0; } while(0)

// get/set RELAY_3 aliases
#define RELAY_3_TRIS                 TRISAbits.TRISA2
#define RELAY_3_LAT                  LATAbits.LATA2
#define RELAY_3_PORT                 PORTAbits.RA2
#define RELAY_3_WPU                  WPUAbits.WPUA2
#define RELAY_3_OD                   ODCONAbits.ODCA2
#define RELAY_3_ANS                  ANSELAbits.ANSELA2
#define RELAY_3_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define RELAY_3_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define RELAY_3_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define RELAY_3_GetValue()           PORTAbits.RA2
#define RELAY_3_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define RELAY_3_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define RELAY_3_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define RELAY_3_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define RELAY_3_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define RELAY_3_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define RELAY_3_SetAnalogMode()      do { ANSELAbits.ANSELA2 = 1; } while(0)
#define RELAY_3_SetDigitalMode()     do { ANSELAbits.ANSELA2 = 0; } while(0)

// get/set RELAY_4 aliases
#define RELAY_4_TRIS                 TRISAbits.TRISA3
#define RELAY_4_LAT                  LATAbits.LATA3
#define RELAY_4_PORT                 PORTAbits.RA3
#define RELAY_4_WPU                  WPUAbits.WPUA3
#define RELAY_4_OD                   ODCONAbits.ODCA3
#define RELAY_4_ANS                  ANSELAbits.ANSELA3
#define RELAY_4_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define RELAY_4_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define RELAY_4_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define RELAY_4_GetValue()           PORTAbits.RA3
#define RELAY_4_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define RELAY_4_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define RELAY_4_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define RELAY_4_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define RELAY_4_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define RELAY_4_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define RELAY_4_SetAnalogMode()      do { ANSELAbits.ANSELA3 = 1; } while(0)
#define RELAY_4_SetDigitalMode()     do { ANSELAbits.ANSELA3 = 0; } while(0)

// get/set MOTOR_1 aliases
#define MOTOR_1_TRIS                 TRISAbits.TRISA4
#define MOTOR_1_LAT                  LATAbits.LATA4
#define MOTOR_1_PORT                 PORTAbits.RA4
#define MOTOR_1_WPU                  WPUAbits.WPUA4
#define MOTOR_1_OD                   ODCONAbits.ODCA4
#define MOTOR_1_ANS                  ANSELAbits.ANSELA4
#define MOTOR_1_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define MOTOR_1_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define MOTOR_1_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define MOTOR_1_GetValue()           PORTAbits.RA4
#define MOTOR_1_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define MOTOR_1_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define MOTOR_1_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define MOTOR_1_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define MOTOR_1_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define MOTOR_1_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define MOTOR_1_SetAnalogMode()      do { ANSELAbits.ANSELA4 = 1; } while(0)
#define MOTOR_1_SetDigitalMode()     do { ANSELAbits.ANSELA4 = 0; } while(0)

// get/set MOTOR_2 aliases
#define MOTOR_2_TRIS                 TRISAbits.TRISA5
#define MOTOR_2_LAT                  LATAbits.LATA5
#define MOTOR_2_PORT                 PORTAbits.RA5
#define MOTOR_2_WPU                  WPUAbits.WPUA5
#define MOTOR_2_OD                   ODCONAbits.ODCA5
#define MOTOR_2_ANS                  ANSELAbits.ANSELA5
#define MOTOR_2_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define MOTOR_2_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define MOTOR_2_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define MOTOR_2_GetValue()           PORTAbits.RA5
#define MOTOR_2_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define MOTOR_2_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define MOTOR_2_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define MOTOR_2_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define MOTOR_2_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define MOTOR_2_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define MOTOR_2_SetAnalogMode()      do { ANSELAbits.ANSELA5 = 1; } while(0)
#define MOTOR_2_SetDigitalMode()     do { ANSELAbits.ANSELA5 = 0; } while(0)

// get/set PWM_2_CTRL_A aliases
#define PWM_2_CTRL_A_TRIS                 TRISAbits.TRISA6
#define PWM_2_CTRL_A_LAT                  LATAbits.LATA6
#define PWM_2_CTRL_A_PORT                 PORTAbits.RA6
#define PWM_2_CTRL_A_WPU                  WPUAbits.WPUA6
#define PWM_2_CTRL_A_OD                   ODCONAbits.ODCA6
#define PWM_2_CTRL_A_ANS                  ANSELAbits.ANSELA6
#define PWM_2_CTRL_A_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define PWM_2_CTRL_A_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define PWM_2_CTRL_A_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define PWM_2_CTRL_A_GetValue()           PORTAbits.RA6
#define PWM_2_CTRL_A_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define PWM_2_CTRL_A_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define PWM_2_CTRL_A_SetPullup()          do { WPUAbits.WPUA6 = 1; } while(0)
#define PWM_2_CTRL_A_ResetPullup()        do { WPUAbits.WPUA6 = 0; } while(0)
#define PWM_2_CTRL_A_SetPushPull()        do { ODCONAbits.ODCA6 = 0; } while(0)
#define PWM_2_CTRL_A_SetOpenDrain()       do { ODCONAbits.ODCA6 = 1; } while(0)
#define PWM_2_CTRL_A_SetAnalogMode()      do { ANSELAbits.ANSELA6 = 1; } while(0)
#define PWM_2_CTRL_A_SetDigitalMode()     do { ANSELAbits.ANSELA6 = 0; } while(0)

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

// get/set PWM_2_CTRL_B aliases
#define PWM_2_CTRL_B_TRIS                 TRISCbits.TRISC0
#define PWM_2_CTRL_B_LAT                  LATCbits.LATC0
#define PWM_2_CTRL_B_PORT                 PORTCbits.RC0
#define PWM_2_CTRL_B_WPU                  WPUCbits.WPUC0
#define PWM_2_CTRL_B_OD                   ODCONCbits.ODCC0
#define PWM_2_CTRL_B_ANS                  ANSELCbits.ANSELC0
#define PWM_2_CTRL_B_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define PWM_2_CTRL_B_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define PWM_2_CTRL_B_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define PWM_2_CTRL_B_GetValue()           PORTCbits.RC0
#define PWM_2_CTRL_B_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define PWM_2_CTRL_B_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define PWM_2_CTRL_B_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define PWM_2_CTRL_B_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define PWM_2_CTRL_B_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define PWM_2_CTRL_B_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define PWM_2_CTRL_B_SetAnalogMode()      do { ANSELCbits.ANSELC0 = 1; } while(0)
#define PWM_2_CTRL_B_SetDigitalMode()     do { ANSELCbits.ANSELC0 = 0; } while(0)

// get/set RC1 procedures
#define RC1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define RC1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define RC1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define RC1_GetValue()              PORTCbits.RC1
#define RC1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define RC1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define RC1_SetPullup()             do { WPUCbits.WPUC1 = 1; } while(0)
#define RC1_ResetPullup()           do { WPUCbits.WPUC1 = 0; } while(0)
#define RC1_SetAnalogMode()         do { ANSELCbits.ANSELC1 = 1; } while(0)
#define RC1_SetDigitalMode()        do { ANSELCbits.ANSELC1 = 0; } while(0)

// get/set RC2 procedures
#define RC2_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define RC2_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define RC2_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define RC2_GetValue()              PORTCbits.RC2
#define RC2_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define RC2_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define RC2_SetPullup()             do { WPUCbits.WPUC2 = 1; } while(0)
#define RC2_ResetPullup()           do { WPUCbits.WPUC2 = 0; } while(0)
#define RC2_SetAnalogMode()         do { ANSELCbits.ANSELC2 = 1; } while(0)
#define RC2_SetDigitalMode()        do { ANSELCbits.ANSELC2 = 0; } while(0)

// get/set PWM_1_CTRL_A aliases
#define PWM_1_CTRL_A_TRIS                 TRISCbits.TRISC3
#define PWM_1_CTRL_A_LAT                  LATCbits.LATC3
#define PWM_1_CTRL_A_PORT                 PORTCbits.RC3
#define PWM_1_CTRL_A_WPU                  WPUCbits.WPUC3
#define PWM_1_CTRL_A_OD                   ODCONCbits.ODCC3
#define PWM_1_CTRL_A_ANS                  ANSELCbits.ANSELC3
#define PWM_1_CTRL_A_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define PWM_1_CTRL_A_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define PWM_1_CTRL_A_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define PWM_1_CTRL_A_GetValue()           PORTCbits.RC3
#define PWM_1_CTRL_A_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define PWM_1_CTRL_A_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define PWM_1_CTRL_A_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define PWM_1_CTRL_A_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define PWM_1_CTRL_A_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define PWM_1_CTRL_A_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define PWM_1_CTRL_A_SetAnalogMode()      do { ANSELCbits.ANSELC3 = 1; } while(0)
#define PWM_1_CTRL_A_SetDigitalMode()     do { ANSELCbits.ANSELC3 = 0; } while(0)

// get/set PWM_1_CTRL_B aliases
#define PWM_1_CTRL_B_TRIS                 TRISCbits.TRISC4
#define PWM_1_CTRL_B_LAT                  LATCbits.LATC4
#define PWM_1_CTRL_B_PORT                 PORTCbits.RC4
#define PWM_1_CTRL_B_WPU                  WPUCbits.WPUC4
#define PWM_1_CTRL_B_OD                   ODCONCbits.ODCC4
#define PWM_1_CTRL_B_ANS                  ANSELCbits.ANSELC4
#define PWM_1_CTRL_B_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define PWM_1_CTRL_B_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define PWM_1_CTRL_B_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define PWM_1_CTRL_B_GetValue()           PORTCbits.RC4
#define PWM_1_CTRL_B_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define PWM_1_CTRL_B_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define PWM_1_CTRL_B_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define PWM_1_CTRL_B_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define PWM_1_CTRL_B_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define PWM_1_CTRL_B_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define PWM_1_CTRL_B_SetAnalogMode()      do { ANSELCbits.ANSELC4 = 1; } while(0)
#define PWM_1_CTRL_B_SetDigitalMode()     do { ANSELCbits.ANSELC4 = 0; } while(0)

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