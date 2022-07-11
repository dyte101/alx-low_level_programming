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

	while (index < n)
	{
		printf("%d", a[index]);

		if (index < n - 1)
		{
			printf(", ");
		}

		index++;
	}
	printf("\n");
}
