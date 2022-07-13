#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @src: frist string 
 * @dest: second string
 * Return: a concatenated string
 */
char *_strcpy(char *dest, char *src)
{
	int src_index = -1, dest_index = 0;

	for (; dest[dest_index] != '\0'; dest_index++);

	do {
		src_index++;
		dest[dest_index] = src[src_index];
	} while (src[src_index] != '\0');

	return (dest);
}
