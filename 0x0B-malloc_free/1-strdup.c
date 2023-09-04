#include "main.h"
#include <string.h>
/**
* _strdup - Returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter.
* @str: string
* Return: a pointer to duplicate string, ow NULL
*/

char *_strdup(char *str)
{
	int i = 0;
	char *duplicate;

	if (!str)
		return (NULL);

	duplicate = (char *) malloc(sizeof(char) * (strlen(str) + 1));

	if (!duplicate)
		return (NULL);
	while (str[i])
	{
		duplicate[i] = str[i];
		i++;
	}
	duplicate[i] = '\0';

	return (duplicate);
}
