#include "main.h"
/**
 * *_strcmp - compares two strings
 * @s1: frist string
 * @s2: second string
 * Return: 0
 */
char *_strcmp(char *s1, char *s2)
{
	int index = 0;

	for (; s1[index] != '\0' || s2[index] != '\0'; index++)
	{
		if (s1[index] != s2[index])
		{
			return (s1[index] - s2[index]);
		}
	}

	return (0);
}
