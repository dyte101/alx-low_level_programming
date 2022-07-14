#include "main.h"
/**
 * cap_string - capitalises all words of string
 * @str: string to be capitalised
 * Return: capitalised string
 */
char cap_string(char *str)
{
	int x = 0, y = 0;
	char sep[] = {' ', '\t', '\n', ',', '!', '?', '"', '(', ')', '{', '}'};

	while (str[x] != '\0')
	{
		if (x == 0 && str[x] >= 'a' && str[x] <= 'z')
		{
			str[x] -= 32;
		}
		while (sep[y] != '\0')
		{
			if (sep[y] == str[x] && (str[x + 1] >= 97 && str[x + 1] <= 'z'))
			{
				str[x + 1] = str[x + 1] - 32;
			}
			y++;
		}
		x++;
	}
	return (str);
}
