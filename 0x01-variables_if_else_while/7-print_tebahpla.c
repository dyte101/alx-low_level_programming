#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - The main entry point of the program
*
* Description: Use putchar to print alphabets in reverse
*
* Return: 0
*/

int main(void)
{
	char alphabet_lower;

	for (alphabet_lower = 'z'; alphabet_lower >= 'a'; alphabet_lower--)
	{
		putchar(alphabet_lower);
	}

	putchar('\n');

	return (0);
}
