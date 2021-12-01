#include <avr/io.h>
#define F_CPU 1000000
#include <util/delay.h>


int main(void)
{
	DDRA = 0x81;
	
	while(1)
	{
		PORTA = 0x01;
		_delay_ms(1000);
		PORTA = 0x00;
		_delay_ms(500);
		PORTA = 0x80;
		_delay_ms(1000);
		PORTA = 0x00;
		_delay_ms(500);
	}
}
