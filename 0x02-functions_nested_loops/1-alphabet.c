#include "main.h"
/**
* main - The main entry point of the program
*
* Description: Prints alphabet
*
* Return: 0
*/


int main(void)
{
	print_alphabet();
	return (0);
}

/**
* print_alphabet - function
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
