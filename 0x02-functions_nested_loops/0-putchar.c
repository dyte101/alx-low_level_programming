#include main.h
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
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(word[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
