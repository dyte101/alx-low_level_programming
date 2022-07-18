/**
 * _strspn - gets the lenght of a prefix substring
 * @s: string
 * @accept: substring
 * Return: lenght of prefix substring
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0;
	unsigned int length = 0;

	for (; s[i] != '\0'; i++)
	{
		for (; accept[j] != '\0' && accept[j] != s[i]; j++)
		;
		if (s[i] == accept[j])
		{
			length++;
		}
		if (accept[j] == '\0')
		{
			return (length);
		}
	}
	return (length);
}
