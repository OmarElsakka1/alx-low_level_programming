#include "search_algos.h"

/**
 * linear_search - Searching for a value in an array
 *                 of integers using linear search.
 * @array: Pointer to the first element of the array to search.
 * @size: Number of elements in the array.
 * @value: Value that we are searching for.
 *
 * Return: the first index where the value is located, or -1.
 *
 * Description: Printing a value every time it is compared in the array.
 */
int linear_search(int *array, size_t size, int value)
{
size_t j;

if (array == NULL)
return (-1);

for (j = 0; j < size; j++)
{
printf("Value checked array[%ld] = [%d]\n", j, array[j]);
if (array[j] == value)
return (j);
}

return (-1);
}
