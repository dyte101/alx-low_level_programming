#include <stdio.h>

/**
* main - The main entry point of the program
*
* Description: Use putchar to print all combination of two two digits
*
* Return: 0
*/

int main(void)
{
	int first_digit, second_digit;

	for (first_digit = 0; first_digit < 100; first_digit++)
	{
		for (second_digit = first_digit + 1; second_digit < 100; second_digit++)
		{
			putchar(first_digit / 10 + '0');
			putchar(first_digit % 10 + '0');
			putchar(' ');
			putchar(second_digit / 10 + '0');
			putchar(second_digit % 10 + '0');
			if ((first_digit != 98) || (second_digit != 99))
			{
				putchar(',');
				putchar(' ');
			}
		}

	}

	putchar('\n');

	return (0);
}
