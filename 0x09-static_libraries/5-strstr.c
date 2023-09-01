#include "main.h"
/**
* _strstr - Finds the first occurrence of the substring
* in a string
* @haystack: string input
* @needle: substring
* Return: pointer to first occurence
*/

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, flag = 1;

	while (haystack[i])
	{
		flag = 1;
		while (needle[j])
		{
			if (haystack[i + j] != needle[j])
			{
				/* Get out */
				flag = 0;
				break;
			}
			j++;
		}
		if (flag)
			return (&haystack[i]);
		i++;
	}

	return (NULL);
}
