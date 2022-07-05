#include "main.h"
/**
* _isalpha - main entry point
*
* Description: checks for alphabets
*
* @c: check character
*
* Return: 1
*/
int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}

	return (0);
}
