/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: byte to check
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s)
	{
		for (; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');

}
