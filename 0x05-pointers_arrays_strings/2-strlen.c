#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length of s
 */
void _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}

	return (length);
}