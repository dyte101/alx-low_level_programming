#include <stdio.h>
/**
 * _strspn - gets the lenght of a prefix substring
 * @s: string
 * @accept: substring
 * Return: lenght of prefix substring
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;

	if ((s == NULL) || (accept == NULL))
	{
		return (length);
	}

	while (*s && _strchr(accept, *s++))
	{
		length++;
	}
	return (length);
	
}