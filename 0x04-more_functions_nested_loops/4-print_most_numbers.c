#include "main.h"
/**
 * print_numbers - prints numbers from 0 to 9 except 2 and 4
 * Return: all integers from 0 - 9 except 2 and 4
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '10'; i++)
	{
		if ((i != '2') && (i != '4'))
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
