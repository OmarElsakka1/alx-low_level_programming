#include "search_algos.h"

/**
 * binary_search - Searching for a value in a sorted array
 *                 of integers using binary search.
 * @array: Pointer to the first element of the array to search.
 * @size: Number of elements in the array.
 * @value: Value that we are searching for.
 *
 * Return: The index where the value is located, or -1.
 *
 * Description: Printing the [sub]array being searched after each change.
 */
int binary_search(int *array, size_t size, int value)
{
  size_t j, left, right;

  if (array == NULL)
    return (-1);

  for (left = 0, right = size - 1; right >= left;)
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
