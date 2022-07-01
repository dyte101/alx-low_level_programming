#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - The main entry point of the program
*
* Description: Use putchar to print all the numbers of base16
*
* Return: 0
*/

int main(void)
{
	for (int base_number = 0; base_number < 10; base_number++)
	{
		putchar(base_number % 10 + '0');
	}
	for (char base_char = 'a'; base_char < 'g'; base_char++)
	{
		putchar(base_char);
	}

	putchar('\n');

	return (0);
}
