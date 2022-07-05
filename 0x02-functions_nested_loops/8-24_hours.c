#include "main.h"
/**
* jack_bauer - main entry
*
* Description: prints every minute of the day of Jack Bauer
*
* Return: 0
*/
void jack_bauer(void)
{
	int hour, min;

	for(hour = 0; hour < 24; hour++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar(hour / 10 + '0');
			_putchar(hour % 10 + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar(min % 10 + '0');
			_putchar('\n');
		}
	}
}
