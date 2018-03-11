#include <msp430.h> 


/**
 * main.c
 */
void main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	P1DIR |= BIT0 + BIT1;

	for(int i=0; i<5; i++){
	    P1OUT &= ~(BIT0 + BIT1);
	    __delay_cycles(500000);
	    P1OUT |= BIT0 + BIT1;
	    __delay_cycles(500000);
	}
}
