#include "main.h"
/**
 * *cap_string - capitalises all words of string
 * @str: string to be capitalised
 * Return: capitalised string
 */
char *cap_string(char *str)
{
	int index = 0;

	if (str[index] >= 'a' && str[index] <= 'z')
	{
		str[index] -= 32;
	}

	while (str[index] != '\0')
	{
		if (str[index] == ' ' || str[index] == '\n' || str[index] == '\t'
		    || str[index] == ',' || str[index] == ';' || str[index] == '.'
		    || str[index] == '!' || str[index] == '?' || str[index] == '"'
		    || str[index] == '(' || str[index] == ')' || str[index] == '{'
		    || str[index] == '}')
		{
			if (str[index + 1] >= 'a' && str[index + 1] <= 'z')
			{
				str[index + 1] -= 32;
			}
		}
		index++;
	}
	return (str);
}
