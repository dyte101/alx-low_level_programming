#include "main.h"
/**
* print_sign - main entry
*
* Description : checks the sign of a number
*
* @n : number to check
*
* Return: 1, 0, -1
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar("+");
		return (1);
	} else if (n == 0)
	{
		_putchar("0");
		return (0);
	}

	_putchar("-");
	return (-1);
}
