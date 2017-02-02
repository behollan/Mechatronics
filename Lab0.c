/*
 * Lab0.c
 *
 * Created: 1/31/2017 2:34:35 PM
 *  Author: Josh
 */ 
#define F_CPU 16000000L  //sets the CPU clock frequency so that the delay function has a reference

#include <avr/io.h>  //
#include <util/delay.h>  //includes the necessary functions for the delay function


void pinInit(void);  // function protoype for the DDR setup function
void writePin(int val);  //function protoype to write 
/*
void microsec(int us);
void milliSecond(int ms)
void microsec(int us){
	_asm nop;
	_asm nop;
	_asm nop;
	_asm nop;
	_asm nop;
	_asm nop;
	_asm nop;
	_asm nop;
	_asm nop;
}
*/
void pinInit(){
    DDRB = (1<<DDB5); //sets the pin to output
	PORTB = (0<<PORTB5);
}
	
	
void writePin(int val){
	//byte newVal = //(0b00100000) or (0b00000000)
	PORTB =val<<5; 
	}
	
int main(void)
{
	pinInit();
    while(1)
    {
      writePin(1);  //tturn the LED on
	  _delay_ms(1000);  //wait a sec
	  writePin(0); //turn the LED off
	  _delay_ms(1000);  // wait a sec
    }
}