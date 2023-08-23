/**
* *leet - encoder
* @s: input
* Return: encoded str
*/

char *leet(char *s)
{
	int i = 0, j;
	char *original = "aAeEoOtTlL";
	char *encoding = "4433007711";

	while (s[i] != '\0')
	{
		for (j = 0; original[j]; j++)
			if (s[i] == original[j])
				s[i] = encoding[j];
		i++;
	}

	return (s);
}
