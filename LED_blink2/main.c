#include "msp.h"
#include <stdint.h>
/*
* main.c
*/
#define RED       0x01
#define GREEN     0x02
#define BLUE      0x04

void main(void) {
       uint32_t dly=125144; // 4 byte unsigned integer //
       int x;
        P2->SEL0 &= ~0x07;
        P2->SEL1 &= ~0x07;    // 1) configure P2.2-P2.0 as GPIO
        P2->DIR |= 0x07;      // 2) make P2.2-P2.0 out
        P2->DS |= 0x07;       // 3) activate increased drive strength
        P2->OUT &= ~0x07; // Initialize P1.0 GPIO pin //

       while (1){

           P2->OUT = (P2->OUT&0xF8)|RED;

           for (x=0;x<dly;x++);

           P2->OUT = (P2->OUT&0xF8)|GREEN;

           for (x=0;x<dly;x++);

           P2->OUT = (P2->OUT&0xF8)|BLUE;

           for (x=0;x<dly;x++);


       }
}
