/****************************************************************************
 **		DC motor control for lab5
 ** 
 **      Description: TO COMPLETE BY THE STUDENT
 ** 
 **  Author          Date                Description/Version
 ** 
 *****************************************************************************/

#include <xc.h>
#include <stdint.h>
#include "initBoard.h"
#include "adc.h"

void __delay32(int32_t);

int main(void)
{
    initOscillator();
    initADC_pins();
    initADC1();
    initIO();

    
	while (1){
        __delay32(14740000);
        _LATB10 ^=1; //  heartbeat
        
    } // end while loop  
}// end main
