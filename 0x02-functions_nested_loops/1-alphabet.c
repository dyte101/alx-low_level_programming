#include "main.h"

/**
* print_alphabet - entry point
*
* Description: Prints alphabet
*
* Return: 0
*/
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
