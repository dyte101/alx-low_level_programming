#include <stdio.h>
/**
 * *_memcpy - copies memory area
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: a pointer to dest
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int index = 0;

	for (; index < n; index++)
	{
		dest[index] = src[index];
	}

	return (dest);

}
