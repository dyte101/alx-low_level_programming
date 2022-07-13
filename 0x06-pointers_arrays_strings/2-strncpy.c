#include "main.h"
/**
 * *_strncpy - copies a string
 * @src: frist string 
 * @dest: second string
 * @n: number of bytes to be copied
 * Return: a concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;

	for (; index < n && src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}

	for (; index < n; index++)
	{
		dest[index] = '\0';
	}

	return (dest);
}
