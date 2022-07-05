#include "main.h"
/**
*
* times_table - main entry
*
* Description: prints the 9 times table
*
* Return: 0
*/
void times_table(void)
{
	int x, y, value;

	x = 0;
	while (x <= 9)
	{
		y = 0;
		while (y <= 9)
		{
			value = x * y;
			if (y == 0)
			{
				_putchar('0' + value);
			} else if (value < 10)
			{
				_putchar(' ');
				_putchar('0' + value);
			} else 
			{
				_putchar('0' + value / 10);
				_putchar('0' + value % 10);
			}

			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			y++;
		}
		_putchar('\n');
		x++;
	}
}
