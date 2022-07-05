#include <stdio.h>
/**
* main - main entry point
*
* Description: prints the first 50 Fibonacci numbers, starting with 1 and 2
*
* Return: 0
*/
int main(void)
{
	long first = 1;
	long  second = 2;
	long sum = 0;

	printf("1, 2");
	while (sum < 20365011073)
	{
		sum = first + second;
		printf(", %lu", sum);
		first = second;
		second = sum;
	}
	printf("\n");
	return (0);
}
