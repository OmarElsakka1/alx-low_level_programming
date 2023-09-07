#include"main.h"
/**
* malloc_checked - allocates memory using malloc
* @b: bytes
* Return: a pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *res = malloc(b);

	if (!res)
		exit(98);
	return (res);
}
