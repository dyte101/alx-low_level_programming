#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string to print
 * Return: 0
 */
void puts2(char *str)
{
	int length;
	char single_char;

	for (length = 0; *(str + length) != 0; length++)
	{
		if (length % 2 == 0)
		{
			single_char = *(str + length);
			_putchar(single_char);
		}
	}
	_putchar('\n');
}
