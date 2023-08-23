/**
* rot13 - rot13 encoder
* @s: string input
* Return: encoded string
*/

char *rot13(char *s)
{
	int i = 0, j;
	char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i])
	{
		for (j = 0; input[j]; j++)
			if (s[i] == input[j])
			{
				s[i] = output[j];
				break;
			}
		i++;
	}

	return (s);
}
