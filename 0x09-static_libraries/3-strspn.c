/**
* _strspn - gets the length of a prefix substring.
* @s: string input
* @accept: pattern
* Return: number of first prefix of the pattern
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	int i = 0, j;

	while (s[i])
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				c++;
				break;
			}
			if (accept[j + 1] == '\0')
				return (c);
		}

		i++;
	}

	return (c);
}
