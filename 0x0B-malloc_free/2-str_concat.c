#include "main.h"
#include <string.h>
/**
* str_concat - concatenate 2 strings
* @s1: prefix string
* @s2: sufix string
* Return: ptr to the new string
*/

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, len1 = 0, len2 = 0;
	char *result;

	if (s1)
		len1 = strlen(s1);
	if (s2)
		len2 = strlen(s2);

	result = (char *) malloc(sizeof(char) * (len1 + len2 + 1));

	if (!result)
		return (NULL);

	while (s1 && s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	while (s2 && s2[j])
	{
		result[i] = s2[j];
		j++;
		i++;
	}
	result[i] = '\0';
	return (result);
}
