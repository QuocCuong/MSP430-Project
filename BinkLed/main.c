#include <msp430.h>

/* Dinh nghia du lieu */
#define B0  BIT0
#define B1  BIT1
#define B2  BIT2
#define B3  BIT3

/*Khai bao chuong trinh con*/
void delay_ms(int ms);

/* Khai bao bien */
int a=100;


void main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	P1DIR |= B0 + B1 + B2 + B3;

	while(1){
	    P1OUT |= BIT0 + BIT1 + BIT2 + BIT3;
	    delay_ms(100);
	    P1OUT &= ~(BIT0 + BIT1 + BIT2 + BIT3);
	    delay_ms(100);
	}
}


// Chuong trinh con delay
void delay_ms(int ms){
    for(int i=0; i<ms; i++){
        __delay_cycles(1000);
    }
}
