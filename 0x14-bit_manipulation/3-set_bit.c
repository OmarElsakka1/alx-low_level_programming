#include "main.h"

/**
 * set_bit - seting the bit to be one at certain
 * Index.
 * @n: This is a pointer to the given number
 * @index: index of the bit of interest
 *
 * Return: 1 -> Success, -1 -> Fail.
 * Made by: Omar El-Sakka
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num;

	if (index > 63)
		return (-1);

	num = 1 << index;
	*n = (*n | num);

	return (1);
}
