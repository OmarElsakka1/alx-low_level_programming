/**
* rev_string - reverses a string
* @s: string to be reversed
* Return: void
*/

void rev_string(char *s)
{
	int len = 0, i, j;

	while (s[len] != '\0')
		len++;

	for (i = 0, j = len - 1; j > i; i++, j--)
	{
		/* Swap arr[i] with arr[j]*/
		char tmp = s[i];

		s[i] = s[j];
		s[j] = tmp;
	}

}
