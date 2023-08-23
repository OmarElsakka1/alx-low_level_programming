/**
* _strcat - concat 2 strings
* @dest: str 1 (destination)
* @src: str 2
* Return: ptr to dest
*/

char *_strcat(char *dest, char *src)
{
	int len1 = 0, i = 1;

	while (dest[len1] != '\0')
		len1++;

	if (src[0])
	{
		dest[len1] = src[0];

		while (src[i] != '\0')
		{
			dest[len1 + i] = src[i];
			i++;
		}
	}

	return (dest);

}
