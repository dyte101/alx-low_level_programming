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
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
