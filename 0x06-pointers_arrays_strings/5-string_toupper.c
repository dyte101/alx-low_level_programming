#include "main.h"
/**
 * *string_toupper - change all lowercase letters of a string to uppercase
 * @str: string to be capitalised
 * Return: capitalised string
 */
char *string_toupper(char *str)
{
	int index = 0;

	for (; str[index] != '\0'; index++)
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] -= 32;
		}
	}
	return (str);
}
