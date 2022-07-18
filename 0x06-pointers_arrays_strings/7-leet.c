#include "main.h"
/**
 * *leet - encodes a string into 1337
 * @str: string to be encoded
 * Return: encoded string
 */
char *leet(char *str)
{
	int i, *j;
	char lower_arr = "aeotl", upper_arr = "AEOTL", num_arr = "43071";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == lower_arr[j] || str[i] == upper_arr[j])
			{
				str[i] = num_arr[j];
				break;
			}
		}
	}
	return (str);
}
