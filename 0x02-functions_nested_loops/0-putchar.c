#include "main.h"
/**
* main - The main entry point of the program
*
* Description: Prints _putchar followed by a new line
*
* Return: 0
*/

int main(void)
{
	char word[10] = "_putchar";
	int index = 0;

	while (index < 9)
	{
		_putchar(word[index]);
		index++;
	}
	_putchar('\n');
	return (0);
}
