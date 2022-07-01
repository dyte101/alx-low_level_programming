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
	for (char aplhabet_lower = 'z'; aplhabet_lower >= 'a'; aplhabet_lower--)
	{
		putchar(aplhabet_lower);
	}

	putchar('\n');

	return (0);
}
