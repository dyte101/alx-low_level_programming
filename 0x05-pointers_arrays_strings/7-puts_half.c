#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string to be printed
 * Return: 0
 */
void puts_half(char *str)
{
	int index, end;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	end = (index + 1) / 2;

	for (index = end; str[index]; index++)
	{
		_putchar(str[index]);
	}

	_putchar('\n');
}
