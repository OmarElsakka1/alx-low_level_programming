/**
* _strncat - concat 2 strings
* @dest: str 1 (destination)
* @src: str 2
* @n: cat val
* Return: ptr to dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0, i = 0;

	while (dest[len1] != '\0')
		len1++;

	if (src[0])
	{
		while (src[i] != '\0' && i < n)
		{
			if (i == 0)
				dest[len1] = src[0];
			else
				dest[len1 + i] = src[i];
			i++;
		}
	}

	return (dest);
}
