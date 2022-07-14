#include "main.h"
/**
 * *string_toupper - capitalises all words of string
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
