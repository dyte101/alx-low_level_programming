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
	for (char aplhabet_lower = 'a'; aplhabet_lower <= 'z'; aplhabet_lower++)
	{
		putchar(aplhabet_lower);
	}
	for (char aplhabet_upper = 'A'; aplhabet_upper <= 'Z'; aplhabet_upper++)
	{
		putchar(aplhabet_upper);
	}

	putchar('\n');

	return (0);
}
