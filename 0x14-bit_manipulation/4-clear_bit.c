#include "main.h"

/**
 * clear_bit - Clearing bit at certain
 * given index.
 * @n: This is a pointer to given number
 * @index: index for the bit that is of interest.
 *
 * Return: 1 if it worked, -1 if it didn't.
 * Made by: Omar El-Sakka
 *
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num;

	if (index > 63)
		return (-1);

	num = 1 << index;

	if (*n & num)
		*n ^= num;

	return (1);
}
