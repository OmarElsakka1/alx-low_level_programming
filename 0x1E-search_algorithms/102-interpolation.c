#include "search_algos.h"

/**
 * interpolation_search - Searching for a value in a sorted array
 *                        of integers using interpolation search.
 * @array: Pointer to the first element of the array to search.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The first index where the value is located, or -1.
 *
 * Description: Printing a value every time it is compared in the array..
 */
int interpolation_search(int *array, size_t size, int value)
{
size_t j, left, right;

if (array == NULL)
return (-1);

for (left = 0, right = size - 1; right >= left;)
{
int temp = (value - array[left]);
j = left + (((double)(right - left) / (array[right] - array[left])) * temp);
if (j < size)
printf("Value checked array[%ld] = [%d]\n", j, array[j]);
else
{
printf("Value checked array[%ld] is out of range\n", j);
break;
}

if (array[j] == value)
return (j);
if (array[j] > value)
right = j - 1;
else
left = j + 1;
}

return (-1);
}
