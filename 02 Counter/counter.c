// Counter.c
// by Fadhel
// increments 7 Segement display when one button
// is pressed, and decrements it when another is pressed.

#include <avr/io.h>
#include <util/delay.h>

DDRB = 0b00000000;
DDRD = 0b00110000;

const int numbers[10] = {
	0b11111111, //0
	0b01100000, //1
	0b11011010, //2
	0b11110010, //3
	0b01100110, //4
	0b10110110, //5
	0b10111110, //6
	0b11100000, //7
	0b11111110, //8
	0b11110110  //9
};

void clearDigit() PORTB = 0b00000000;
void setNumber(int num) PORTB = number[num];

void main(){
	int num = 0;
	clearDigit();
	while(1){
		setDigit(number);
		if(PORTD == 0b00100000) num++;
		if(PORTD == 0b00010000) num--;
		if(num >= 10) num = 0;
		if(num <= -1) num = 9;
	}
}
