
/**************************************************************************
 File name: main.c
 Name: Lab1, PIC24 Oscillator configuration and GitHub with MPLAB IDE
 Description:Toggling an LED in Pic24128GA010 under the situation that 
 the oscillator is in FRC PLL mode.  
 Revision history:
 Lab No: 1
 * ******************************************************************
 Author:             date:         comment on this revision
 * *****************************************************************
 Azadeh Nazari       2017/08/24    v 1.0.0 uuuu
 *************************************************************/
#include "mcc_generated_files/mcc.h"
#include<xc.h>
#include<stdio.h>
#include<stdlib.h>
#define BIT7OUT 0b011111;   
#define BIT7IN 0b10000000;
#define BIT7XOR 0b10000000;


/*
                         Main application
 */
int main(void)
{
    // initialize the device
    SYSTEM_Initialize();
        TRISA=TRISA&BIT7OUT;    // setting portA7 as an output 
        LATA=LATA|BIT7IN;       //setting portA7 in high state


    while (1)
    {
        LATA=LATA^0b10000000;   // making delay by BITXOR constant mask counter to blink LED
    }

    return -1;
}
/**
 End of File
*/
