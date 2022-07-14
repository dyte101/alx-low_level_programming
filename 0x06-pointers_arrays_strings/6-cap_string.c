#include "main.h"
/**
 * *cap_string - capitalises all words of string
 * @str: string to be capitalised
 * Return: capitalised string
 */
char *cap_string(char *str)
{
	int index = 0;

	for (; str[index] != '\0'; index++)
	{
		if (index == 0)
		{
			if ((str[index] >= 'a' && str[index] <= 'z'))
			{
				str[index] -= 32;
			}
			continue;
		}
		if (str[index] == ' ' || str[index] == '\n' || str[index] == '\t'
				    || str[index] == ',' || str[index] == ';' || str[index] == '.'
				    || str[index] == '!' || str[index] == '?' || str[index] == '"'
				    || str[index] == '(' || str[index] == ')' || str[index] == '{'
				    || str[index] == '}')
		{
			++index;
			if (str[index] >= 'a' && str[index] <= 'z')
			{
				str[index] = str[index] - 32;
				continue;
			}
		}
		else
		{
			if (str[index] >= 'A' && str[index] <= 'Z')
			{
				str[index] = str[index] + 32;
			}
		}
	}
	return (str);
}
