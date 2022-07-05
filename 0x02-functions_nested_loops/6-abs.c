#include "main.h"
/**
* _abs - main entry point
*
* Description : computes the absolute value of an integer
*
* @n : checked number
*
* Return: 1
*/
int _abs(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}
	return (n);
}
