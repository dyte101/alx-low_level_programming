#include "main.h"
/**
 * *_strcmp - compares two strings
 * @s1: frist string
 * @s2: second string
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int index = 0;

	while (s1[index] == s2[index] && s1[index] != '\0')
	{
		index++;
	}

	return (s1[index] - s2[index]);
}
