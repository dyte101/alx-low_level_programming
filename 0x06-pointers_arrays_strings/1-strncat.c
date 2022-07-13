#include "main.h"
/**
 * *_strncat - concatenates two strings
 * @src: frist string 
 * @dest: second string
 * @n: number of bytes from src
 * Return: a concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, length = 0;

	for (; dest[length] != '\0'; length++);

	for (; index < n && src[index] != '\0'; index++)
	{
		dest[length + index] = src[index];
	}

	dest[length + index] = '\0';

	return (dest);
}
