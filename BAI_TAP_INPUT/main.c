#include <msp430.h> 

#define button0 BIT0
#define button1 BIT1
#define button2 BIT2
#define button3 BIT3

void main(void)
{
    WDTCTL = WDTPW | WDTHOLD;
    unsigned char status_button3;
    P1DIR = 0xf0;
    P3DIR = 0xff;
    while(1){
        if((P1IN & button0) == 0){
            for(int i=0; i<10; i++){
                P3OUT |= BIT0;
                __delay_cycles(200000);
                P3OUT &=~ BIT0;
                __delay_cycles(200000);
                if((P1IN&button2) == 0){
                    P3OUT = 0x00;
                    break;
                }
            }
        }
        else if((P1IN & button1) == 0){
            for(int i=0; i<5; i++){
                P3OUT |= BIT1;
                __delay_cycles(200000);
                P3OUT &=~ BIT1;
                __delay_cycles(200000);
                if((P1IN&button2) == 0){
                    P3OUT = 0x00;
                    break;
                }
            }
        }
        else if((P1IN & button3) == 0){
            for(int i=0; i<10; i++){
                P3OUT |= BIT2;
                P3OUT &=~ BIT3;
                __delay_cycles(200000);
                P3OUT |= BIT3;
                P3OUT &=~ BIT2;
                __delay_cycles(200000);
                if((P1IN&button2) == 0){
                    P3OUT = 0x00;
                    break;
                }
            }
        }
    }
}
