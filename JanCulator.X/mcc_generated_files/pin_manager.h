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
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.78.1
        Device            :  PIC16F1619
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.10 and above
        MPLAB 	          :  MPLAB X 5.30	
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

// get/set RA0 procedures
#define RA0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define RA0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define RA0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define RA0_GetValue()              PORTAbits.RA0
#define RA0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define RA0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define RA0_SetPullup()             do { WPUAbits.WPUA0 = 1; } while(0)
#define RA0_ResetPullup()           do { WPUAbits.WPUA0 = 0; } while(0)
#define RA0_SetAnalogMode()         do { ANSELAbits.ANSA0 = 1; } while(0)
#define RA0_SetDigitalMode()        do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set Reset aliases
#define Reset_TRIS                 TRISAbits.TRISA1
#define Reset_LAT                  LATAbits.LATA1
#define Reset_PORT                 PORTAbits.RA1
#define Reset_WPU                  WPUAbits.WPUA1
#define Reset_OD                   ODCONAbits.ODA1
#define Reset_ANS                  ANSELAbits.ANSA1
#define Reset_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define Reset_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define Reset_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define Reset_GetValue()           PORTAbits.RA1
#define Reset_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define Reset_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define Reset_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define Reset_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define Reset_SetPushPull()        do { ODCONAbits.ODA1 = 0; } while(0)
#define Reset_SetOpenDrain()       do { ODCONAbits.ODA1 = 1; } while(0)
#define Reset_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define Reset_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set INT aliases
#define INT_TRIS                 TRISAbits.TRISA2
#define INT_LAT                  LATAbits.LATA2
#define INT_PORT                 PORTAbits.RA2
#define INT_WPU                  WPUAbits.WPUA2
#define INT_OD                   ODCONAbits.ODA2
#define INT_ANS                  ANSELAbits.ANSA2
#define INT_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define INT_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define INT_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define INT_GetValue()           PORTAbits.RA2
#define INT_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define INT_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define INT_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define INT_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define INT_SetPushPull()        do { ODCONAbits.ODA2 = 0; } while(0)
#define INT_SetOpenDrain()       do { ODCONAbits.ODA2 = 1; } while(0)
#define INT_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define INT_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set RB4 procedures
#define RB4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define RB4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define RB4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define RB4_GetValue()              PORTBbits.RB4
#define RB4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define RB4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define RB4_SetPullup()             do { WPUBbits.WPUB4 = 1; } while(0)
#define RB4_ResetPullup()           do { WPUBbits.WPUB4 = 0; } while(0)
#define RB4_SetAnalogMode()         do { ANSELBbits.ANSB4 = 1; } while(0)
#define RB4_SetDigitalMode()        do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set LED aliases
#define LED_TRIS                 TRISCbits.TRISC0
#define LED_LAT                  LATCbits.LATC0
#define LED_PORT                 PORTCbits.RC0
#define LED_WPU                  WPUCbits.WPUC0
#define LED_OD                   ODCONCbits.ODC0
#define LED_ANS                  ANSELCbits.ANSC0
#define LED_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define LED_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define LED_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define LED_GetValue()           PORTCbits.RC0
#define LED_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define LED_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define LED_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define LED_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define LED_SetPushPull()        do { ODCONCbits.ODC0 = 0; } while(0)
#define LED_SetOpenDrain()       do { ODCONCbits.ODC0 = 1; } while(0)
#define LED_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define LED_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)

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


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCAF2 pin functionality
 * @Example
    IOCAF2_ISR();
 */
void IOCAF2_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCAF2 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCAF2 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF2_SetInterruptHandler(MyInterruptHandler);

*/
void IOCAF2_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCAF2 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCAF2_SetInterruptHandler() method.
    This handler is called every time the IOCAF2 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF2_SetInterruptHandler(IOCAF2_InterruptHandler);

*/
extern void (*IOCAF2_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCAF2 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCAF2_SetInterruptHandler() method.
    This handler is called every time the IOCAF2 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF2_SetInterruptHandler(IOCAF2_DefaultInterruptHandler);

*/
void IOCAF2_DefaultInterruptHandler(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/