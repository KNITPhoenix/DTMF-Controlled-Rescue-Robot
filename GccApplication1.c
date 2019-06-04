#include<avr/io.h>
#define F_CPU8000000UL

int main(void)
{
	DDRC=0xff;
	PORTC=0x00;
	DDRD=0x00;
	PORTD=0xff;
	while(1)
	{
		if ((PIND & 0x0F)== 0x01)
		{
			PORTC=0x0A;
		}
		else if((PIND & 0x0F)== 0x02)
		{
			PORTC=0x05;
		}
		else if((PIND & 0x0F)== 0x03)
		{
			PORTC=0x09;
		}
		else if((PIND & 0x0F)== 0x04)
		{
			PORTC=0x06;
		}
		else
		{
			PORTC=0x00;
		}
	}
}