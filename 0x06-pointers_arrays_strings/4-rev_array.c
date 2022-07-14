#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * @a: array
 * @n: length of array
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int mid_point = n / 2, index = 0, decr_index = index - 1;

	for (; index < 0; mid_point, index++)
	{
		a[index] = a[n - decr_index];
	}
}
