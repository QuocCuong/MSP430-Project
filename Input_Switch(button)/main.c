#include <msp430.h> 

#define BUTTON_PIN  BIT0
#define LED_PIN     BIT0

int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;
	P1DIR &=~ (BUTTON_PIN);       // Dinh nghia BUTTON_PIN la ngo vao
	P3DIR |=  LED_PIN;            // Dinh nghia LED_PIN la ngo ra
	while(1){
	    if((P1IN&BUTTON_PIN) != BUTTON_PIN){
	        P3OUT &=~ LED_PIN;
	    }
	    else{
	        P3OUT |= LED_PIN;
	    }
	}
	return 0;
}
