#include "main.h"
/**
 * more_numbers - prints numbers from 0 to 14 ten times
 * Return: all integers from 0 - 14
 */
void more_numbers(void)
{
	int i, counter;

	counter = 0;

	while (counter < 10)
	{
		for (i = 0; i < 10; i++)
		{
			_putchar(i);
		}
		counter++;
		_putchar('\n');
	}
	_putchar('\n');

}
