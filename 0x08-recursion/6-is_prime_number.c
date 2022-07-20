#include "main.h"
/**
 * is_prime_number - checks for prime number
 * @n: integer to check
 * Return: 1
 */

int is_prime_number(int n)
{
	return (prime(n, 2));
}

/**
 * prime - if number are divisible by y
 * @x: integer
 * @y: integer
 * Return: int
 */
int prime(int x, int y)
{
	if ((y >= x) && (x > 1))
	{
		return (1);
	}
	else if ((x % y == 0) || (x <= 1))
	{
		return (0);
	}
	else
	{
		return (prime(x, y + 1));
	}
}
