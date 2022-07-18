#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of two diagonals of a square matrix
 * @a: array of int types
 * @size: size of array
 */

void print_diagsums(int *a, int size)
{
	int i, first_sum = 0, second_num = 0;

	for (i = 0; i < size; i++)
	{
		first_sum += a[i];
		second_num += a[size - i - 1];
		a += size;
	}
	printf("%d, ", first_sum);
	printf("%d\n", second_num);
}
