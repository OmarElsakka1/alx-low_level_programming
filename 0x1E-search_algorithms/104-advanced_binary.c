#include "search_algos.h"

/**
 * advanced_binary_recursive - Searching recursively for a value in a sorted
 *                             array of integers using binary search.
 * @array: Pointer to the first element of the [sub]array to search.
 * @left: Starting index of the [sub]array to search.
 * @right: Ending index of the [sub]array to search.
 * @value: Value to search for.
 *
 * Return: The index where the value is located, or -1.
 *
 * Description: Printing the [sub]array being searched after each change.
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
size_t j;

if (right < left)
return (-1);

printf("Searching in array: ");
for (j = left; j < right; j++)
printf("%d, ", array[j]);
printf("%d\n", array[j]);

j = left + (right - left) / 2;
if (array[j] == value && (j == left || array[j - 1] != value))
return (j);
if (array[j] >= value)
return (advanced_binary_recursive(array, left, j, value));
return (advanced_binary_recursive(array, j + 1, right, value));
}

/**
 * advanced_binary - Searching for a value in a sorted array
 *                   of integers using advanced binary search.
 * @array: Pointer to the first element of the array to search.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The first index where the value is located, or -1.
 *
 * Description: Printing the [sub]array being searched after each change.
 */
int advanced_binary(int *array, size_t size, int value)
{
if (array == NULL || size == 0)
return (-1);

return (advanced_binary_recursive(array, 0, size - 1, value));
}
