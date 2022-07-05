#include <stdio.h>

/**
 * main - entry point
 *
 * Description: finds and prints first 98 Fib numbers
 *
 * Return: 0
 */
int main(void)
{
	int count = 2;

	float x = 1;
	float y = x + 1;
	float z = x + y;

	printf("%.0f, ", x);
	printf("%.0f, ", y);
	while (count < 98)
	{
		count++;
		printf("%.0f", z);
		x = y;
		y = z;
		z = x + y;
		if (count < 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
