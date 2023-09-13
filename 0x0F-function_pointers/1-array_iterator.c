#include "function_pointers.h"
/**
 * array_iterator - applies a func on each element of array
 * @array: array of int
 * @size: size of array
 * @action: pointer to a function that takes a name and returns void
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (action && array)
		for (i = 0; i < size; i++)
			action(array[i]);
}
