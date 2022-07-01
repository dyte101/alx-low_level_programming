#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - The main entry point of the program
*
* Description: Use putchar to print alphabets except q and e
*
* Return: 0
*/

int main(void)
{
	for (char aplhabet = 'a'; aplhabet <= 'z'; aplhabet++)
	{
		if (aplhabet != 'q' && aplhabet != 'e')
			putchar(aplhabet);
	}
	putchar('\n');

	return (0);
}
