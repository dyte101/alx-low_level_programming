#include <unistd.h>

/**
* main - The main entry point of the program
*
* Description: A program that prints exactly "and that piece
* of art is useful" - Dora Korpar, 2015-10-19"
*
* Return: 1
*/
int main(void)
{
	char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	/* */
	write(2, s, sizeof(s));
	return (1);
}
