/**
 * _strlen - returns str length
 * @s: string (char[])
 * Return: length of string
*/

int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	return (c);
}
