#include "msp.h"
/*
* main.c
*/
void main(void) {
       uint32_t dly=12144; // 4 byte unsigned integer //
       int x;
       P1->SEL0 = 0x00; // Initialize P1.0 GPIO pin //
       P1->DIR = 0x01; // Set P1.0 (LED) to output direction //
       while (1){
           P1->OUT = P1->OUT ^ 0x01; // Set P1.0 output high //
           for (x=0;x<dly;x++);

       }
}
