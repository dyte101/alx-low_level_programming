#include "main.h"
/**
* _islower - main entry point
*
* Description: checks for lower case
*
* @c : check character
* Return: 1
*/
int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}

	return (0);
}
