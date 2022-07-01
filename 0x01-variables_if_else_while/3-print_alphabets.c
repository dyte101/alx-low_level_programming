#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - The main entry point of the program
*
* Description: Use putchar to print alphabets
*
* Return: 0
*/

int main(void)
{

	char alphabet_lower;
	char alphabet_upper;

	for (alphabet_lower = 'a'; alphabet_lower <= 'z'; alphabet_lower++)
	{
		putchar(alphabet_lower);
	}
	for (alphabet_upper = 'A'; alphabet_upper <= 'Z'; alphabet_upper++)
	{
		putchar(alphabet_upper);
	}

	putchar('\n');

	return (0);
}
