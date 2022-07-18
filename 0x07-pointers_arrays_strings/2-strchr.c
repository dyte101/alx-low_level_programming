#include <stdio.h>
/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to find
 * Return: a pointer to the first occurence of the character
 *
 */

char *_strchr(char *s, char c)
{
	while (s != '\0' && s != c)
	{
		s++;
	}
	if (s == c)
	{
		return (s);
	}
	else
	{
		return (NULL);
	}

}
