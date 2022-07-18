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
	int index = 0;

	for (; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
		{
			return (s + index);
		}
	}
	return (NULL);
}
