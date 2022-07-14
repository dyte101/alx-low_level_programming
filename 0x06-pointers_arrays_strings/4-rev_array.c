#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * @a: array
 * @n: length of array
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int mid_point = n / 2, index = 0, temp;

	for (; index < mid_point; index++)
	{
		temp = a[index];
		a[index] = a[n - index - 1];
		a[n - index - 1] = temp;
	}
}
