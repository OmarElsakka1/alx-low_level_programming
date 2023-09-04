#include "main.h"
/**
* create_array - creates an array of chars, and
* initializes it with a specific char.
* @size: size of arr
* @c: char to be assigned with
* Return: pointer to char array
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = (char *) malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);

	if (!arr)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
