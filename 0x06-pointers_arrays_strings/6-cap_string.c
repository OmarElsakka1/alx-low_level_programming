/**
* *cap_string - capitalize
* @s: str
* Return: cap string
*/

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;

		if (s[i + 1])
		{
			char c = s[i];

			int condition = c == ' ' || c == '\t' || c == '\n' ||
			c == ',' || c == ';' || c == ';' || c == '.' ||
			c == '!' || c == '?' || c == '"' || c == '(' ||
			c == ')' || c == '{' || c == '}';

			if (condition && s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] -= 32;
		}
		i++;
	}

	return (s);
}
