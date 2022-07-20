#include "main.h"
/**
 * _sqrt_recursion - prints square root of a number
 * @n: integer
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	return (square_root(n, 0));
}

/**
 * square_root - gets the square root of n
 * @x: integer
 * @y: integer
 * Return: square root
 */

int square_root(int x, int y)
{
	if ((y * y) == x)
	{
		return (y);
	}
	else if ((y * y) > x)
	{
		return (-1);
	}
	return (square_root(x, y + 1));
}
