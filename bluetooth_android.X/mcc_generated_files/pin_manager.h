/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.0
        Device            :  PIC16F1619
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IO_RA5 aliases
#define IO_RA5_TRIS               TRISAbits.TRISA5
#define IO_RA5_LAT                LATAbits.LATA5
#define IO_RA5_PORT               PORTAbits.RA5
#define IO_RA5_WPU                WPUAbits.WPUA5
#define IO_RA5_OD                ODCONAbits.ODA5
#define IO_RA5_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define IO_RA5_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define IO_RA5_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define IO_RA5_GetValue()           PORTAbits.RA5
#define IO_RA5_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define IO_RA5_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define IO_RA5_SetPullup()      do { WPUAbits.WPUA5 = 1; } while(0)
#define IO_RA5_ResetPullup()    do { WPUAbits.WPUA5 = 0; } while(0)
#define IO_RA5_SetPushPull()    do { ODCONAbits.ODA5 = 1; } while(0)
#define IO_RA5_SetOpenDrain()   do { ODCONAbits.ODA5 = 0; } while(0)

// get/set RB5 procedures
#define RB5_SetHigh()    do { LATBbits.LATB5 = 1; } while(0)
#define RB5_SetLow()   do { LATBbits.LATB5 = 0; } while(0)
#define RB5_Toggle()   do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define RB5_GetValue()         PORTBbits.RB5
#define RB5_SetDigitalInput()   do { TRISBbits.TRISB5 = 1; } while(0)
#define RB5_SetDigitalOutput()  do { TRISBbits.TRISB5 = 0; } while(0)
#define RB5_SetPullup()     do { WPUBbits.WPUB5 = 1; } while(0)
#define RB5_ResetPullup()   do { WPUBbits.WPUB5 = 0; } while(0)
#define RB5_SetAnalogMode() do { ANSELBbits.ANSB5 = 1; } while(0)
#define RB5_SetDigitalMode()do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set RB7 procedures
#define RB7_SetHigh()    do { LATBbits.LATB7 = 1; } while(0)
#define RB7_SetLow()   do { LATBbits.LATB7 = 0; } while(0)
#define RB7_Toggle()   do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define RB7_GetValue()         PORTBbits.RB7
#define RB7_SetDigitalInput()   do { TRISBbits.TRISB7 = 1; } while(0)
#define RB7_SetDigitalOutput()  do { TRISBbits.TRISB7 = 0; } while(0)
#define RB7_SetPullup()     do { WPUBbits.WPUB7 = 1; } while(0)
#define RB7_ResetPullup()   do { WPUBbits.WPUB7 = 0; } while(0)
#define RB7_SetAnalogMode() do { ANSELBbits.ANSB7 = 1; } while(0)
#define RB7_SetDigitalMode()do { ANSELBbits.ANSB7 = 0; } while(0)

// get/set IO_RC1 aliases
#define IO_RC1_TRIS               TRISCbits.TRISC1
#define IO_RC1_LAT                LATCbits.LATC1
#define IO_RC1_PORT               PORTCbits.RC1
#define IO_RC1_WPU                WPUCbits.WPUC1
#define IO_RC1_OD                ODCONCbits.ODC1
#define IO_RC1_ANS                ANSELCbits.ANSC1
#define IO_RC1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define IO_RC1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define IO_RC1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define IO_RC1_GetValue()           PORTCbits.RC1
#define IO_RC1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define IO_RC1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define IO_RC1_SetPullup()      do { WPUCbits.WPUC1 = 1; } while(0)
#define IO_RC1_ResetPullup()    do { WPUCbits.WPUC1 = 0; } while(0)
#define IO_RC1_SetPushPull()    do { ODCONCbits.ODC1 = 1; } while(0)
#define IO_RC1_SetOpenDrain()   do { ODCONCbits.ODC1 = 0; } while(0)
#define IO_RC1_SetAnalogMode()  do { ANSELCbits.ANSC1 = 1; } while(0)
#define IO_RC1_SetDigitalMode() do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set IO_RC4 aliases
#define IO_RC4_TRIS               TRISCbits.TRISC4
#define IO_RC4_LAT                LATCbits.LATC4
#define IO_RC4_PORT               PORTCbits.RC4
#define IO_RC4_WPU                WPUCbits.WPUC4
#define IO_RC4_OD                ODCONCbits.ODC4
#define IO_RC4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define IO_RC4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define IO_RC4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define IO_RC4_GetValue()           PORTCbits.RC4
#define IO_RC4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define IO_RC4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define IO_RC4_SetPullup()      do { WPUCbits.WPUC4 = 1; } while(0)
#define IO_RC4_ResetPullup()    do { WPUCbits.WPUC4 = 0; } while(0)
#define IO_RC4_SetPushPull()    do { ODCONCbits.ODC4 = 1; } while(0)
#define IO_RC4_SetOpenDrain()   do { ODCONCbits.ODC4 = 0; } while(0)

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