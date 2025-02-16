// blink.c
// by Fadhel Abbas
// turns on an LED which is connected to PB5 (digital out 13)

#include <avr/io.h>
#include <util/delay.h>

void main(){
	DDRB = 0b0010000; // PB5 now output
	PORTB = 0b0000000; // led off
	// infinite loop
	while(1){
		PORTB = 0b0010000; // led on
		_delay_ms(250);
		PORTB = 0b0000000; // led off
		_delay_ms(250);
	}
}
