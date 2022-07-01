#include <stdio.h>

/**
* main - The main entry point of the program
*
* Description: Prints all single digit numbers of base 10
*
* Return: 0
*/

int main(void)
{
	int number;

	for (number = 48; number < 58; number++)
	{
		putchar(number);
	}
	putchar('\n');

	return (0);
}
