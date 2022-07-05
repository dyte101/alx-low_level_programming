#include "main.h"

/**
* print_alphabet_x10 - entry point
*
* Description: Prints alphabet 10 times
*
* Return: 0
*/
void print_alphabet_x10(void)
{
	char alphabet;
	int counter = 0;

	while (counter < 10)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
		counter++;
	}
}
