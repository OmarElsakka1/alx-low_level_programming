#include "main.h"
/**
* _strchr - returns the adress of the char in str
* @s: string
* @c: char to find
* Return: char address
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	if (!c)
		return (&s[i]);

	return (NULL);
}
