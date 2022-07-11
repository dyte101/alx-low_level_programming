#include "main.h"
/**
 * *_strcpy - copies a string
 * @dest: destination to be copied
 * @src: source from which string is being copied from
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int index = -1;

	do {
		index++;
		dest[index] = src[index];
	} while (src[index] != '\0');

	return (dest);
}
