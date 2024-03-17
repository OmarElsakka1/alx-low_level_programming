#include "search_algos.h"

/**
 * _binary_search - Searching for a value in a sorted array
 *                  of integers using binary search.
 * @array: Pointer to the first element of the array to search.
 * @left: Starting index of the [sub]array to search.
 * @right: Ending index of the [sub]array to search.
 * @value: Value to search for.
 *
 * Return: The index where the value is located, -1.
 *
 * Description: Printing the [sub]array being searched after each change.
 */
int _binary_search(int *array, size_t left, size_t right, int value)
{
size_t j;

if (array == NULL)
return (-1);

while (right >= left)
{
printf("Searching in array: ");
for (j = left; j < right; j++)
printf("%d, ", array[j]);
printf("%d\n", array[j]);

j = left + (right - left) / 2;
if (array[j] == value)
return (j);
if (array[j] > value)
right = j - 1;
else
left = j + 1;
}

return (-1);
}

/**
 * exponential_search - Searching for a value in a sorted array
 *                      of integers using exponential search.
 * @array: Pointer to the first element of the array to search.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The index where the value is located, -1.
 *
 * Description: Printing a value every time it is compared in the array.
 */
int exponential_search(int *array, size_t size, int value)
{
size_t j = 0, r;

if (array == NULL)
return (-1);

if (array[0] != value)
{
for (j = 1; j < size && array[j] <= value; j = j * 2)
printf("Value checked array[%ld] = [%d]\n", j, array[j]);
}

r = j < size ? j : size - 1;
printf("Value found between indexes [%ld] and [%ld]\n", j / 2, r);
return (_binary_search(array, j / 2, r, value));
}
