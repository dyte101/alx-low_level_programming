#include "main.h"
/**
* main - The main entry point of the program
*
* Description: Use putchar to print alphabets
*
* Return: 0
*/

void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char alphabet;
	
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
	
}
