#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: 0
 */
void rev_string(char *s)
{
	int length, index;
	char temp;

	length = 0;

	while (*(s + length) != '\0')
	{
		length++;
	}
	length--;
	for (index = 0; index < length; index++)
	{
		temp = *(s + length);
		*(s + length) = *(s + index);
		*(s + index) = temp;
		length--;
	}

}
