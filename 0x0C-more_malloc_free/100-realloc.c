#include "main.h"
/**
* _realloc - reallocates a memory block
* @ptr: pointer to the prev block
* @old_size: size of the allocated space for ptr
* @new_size: new size
* Return: ptr to new block
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *res;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		res = malloc(new_size);
		if (!res)
			return (NULL);
		return (res);
	}

	res = malloc(new_size);
	if (!res)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
		res[i] = ((char *)ptr)[i];

	free(ptr);
	return (res);
}
