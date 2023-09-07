#include "main.h"
#include <string.h>
/**
* string_nconcat - cat 2 strings
* @s1: string 1
* @s2: string 2
* @n: n bytes from s2
* Return: new string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);

	n >= len2 ? n = len2 : n;

	res = malloc(sizeof(char) * (len1 + n + 1));
	if (!res)
		return (NULL);
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}

	for ( ; j < n; j++)
		res[i + j] = s2[j];
	res[i + j] = '\0';

	return (res);
}
