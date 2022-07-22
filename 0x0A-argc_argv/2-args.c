#include <stdio.h>
/**
 * main - prints all arguments
 * @argc: argument counter
 * @argv: agument array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 1;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
