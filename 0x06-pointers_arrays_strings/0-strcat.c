#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @src: frist string
 * @dest: second string
 * Return: a concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int dest_index = 0, src_index = 0;

	while (dest[dest_index] != 0)
	{
		dest_index++;
	}

	while (src[src_index] != 0)
	{
		dest[dest_index] = src[src_index];
		dest_index++;
		src_index++;
	}

	return (dest);
}
