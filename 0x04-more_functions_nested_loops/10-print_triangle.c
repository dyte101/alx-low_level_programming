#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 * Return: 0
 */
void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= size; x++)
		{
			for (y = size - x; y > 0; y--)
			{
				_putchar(' ');
			}
			for (z = 0; z < x; z++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
