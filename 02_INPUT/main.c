#include <msp430.h> 

void main(void)
{
	WDTCTL = WDTPW | WDTHOLD;
	P1DIR &=~ BIT0;
	P3DIR = 0xff;

	int a=1;
	int i;
	while(1){
      if((P1IN & BIT0) == 0){
          __delay_cycles(500000);
          a++;
          if(a%2==0){
              for(i = 0; i< 5 ; i++)
              {
                  P3OUT |= BIT0;
                  __delay_cycles(500000);
                  P3OUT &=~ BIT0;
                  __delay_cycles(100000);
              }
          }
          else{
              for(i=0; i<10; i++)
              {
                  P3OUT |= BIT0;
                  __delay_cycles(500000);
                  P3OUT &=~ BIT0;
                  __delay_cycles(100000);
              }
          }
      }
      else{
          P3OUT &=~ BIT0;
      }
	}
}
