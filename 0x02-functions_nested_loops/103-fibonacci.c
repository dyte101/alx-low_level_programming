#include <stdio.h>
/**
* main - main entry point
*
*Description: write a program that finds and prints sum of even-valued terms
*
* Return: 0
*/
int main(void)
{
	long int x = 1;
	long int y = 2;
	long int sum = 0;
	long int result = 2;

	while (sum < 4000000)
	{
		sum = x + y;
		x = y;
		y = sum;
		if (sum % 2 == 0)
		{
			result += sum;
		}
	}
	printf("%li\n", result);
	return (0);
}
