#include "main.h"
#include <stdio.h>
/**
 * print_array - prints elements of an array
 * @a: array pointer
 * @n: array size
 * Return: 0
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		if (index != n - 1)
		{
			printf("%d, ", a[index]);
		}
		else
		{
			printf("%d", a[index]);
		}
	}
	printf("\n");
}
