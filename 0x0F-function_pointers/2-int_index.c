#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array of int
 * @size: size of array
 * @cmp: pointer to a function that takes int and returns int
 * Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		int res = cmp(array[i]);

		if (res != 0)
			return (i);
	}
	return (-1);
}
