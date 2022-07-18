#include <stdio.h>

/**
 * *_memset - fills memory with a constant byte
 * @s: pointer to the memory area
 * @b: constant byte
 * @n: number of bytes
 * Return: a pointer to the memory area
 * 
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *ptr = s;
	while (n--)
	{
		*ptr++ = b;
	}
	return (s);
	
}