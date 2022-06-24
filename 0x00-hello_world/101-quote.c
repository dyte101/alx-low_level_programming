#include <unistd.h>

/**
* main - The main entry point of the program
*
* Description: A program that prints exactly "and that piece
* of art is useful" - Dora Korpar, 2015-10-19"
*
* Return: 0
*/

int main(void)
{
	char sentence_arr [] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, sentence_arr, sizeof(sentence_arr));
	return 0;
}
