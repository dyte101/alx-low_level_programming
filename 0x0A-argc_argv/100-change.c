#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints minimum number of coins to make change
 * @argc: argument counter
 * @argv: agument array
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	int money, change = 0;

	if (argc == 2)
	{
		money = atoi(argv[1]);
		while (money > 0)
		{
			change++;

			if ((money - 25) >= 0)
			{
				money -= 25;
				continue;
			}
			else if ((money - 10) >= 0)
			{
				money -= 10;
				continue;
			}
			else if ((money - 5) >= 0)
			{
				money -= 5;
				continue;
			}
			else if ((money - 2) >= 0)
			{
				money -= 2;
				continue;
			}
			else if ((money - 1) >= 0)
				money -= 1;
				continue;
			money--;
		}
		printf("%d\n", change);
		return (0);
	}
	else
		printf("Error\n");
		return (1);
}
