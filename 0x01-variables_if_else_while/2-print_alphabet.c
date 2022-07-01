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
	for (char aplhabet = 'a'; aplhabet <= 'z'; aplhabet++)
	{
		putchar(aplhabet);
	}
	putchar('\n');

	return (0);
}
