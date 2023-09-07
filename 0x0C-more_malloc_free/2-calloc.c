#include "main.h"
/**
* _calloc - alloc memory
* @nmemb: number
* @size: size of each entry
* Return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *res;

	if (nmemb == 0 || size == 0)
		return (NULL);

	 res = malloc(nmemb * size);

	if (!res)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		res[i] = 0;
	return (res);
}
