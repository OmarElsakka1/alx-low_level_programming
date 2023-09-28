#include <stdio.h>
#include "main.h"
/**
 * get_bit - get bit at certain index
 * @n: number to calculate
 * @index: index of bit that we are targeting (0,1,2,3,,)
 * Return: value of the bit at this given index, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num;

	if (index > 64)
		return (-1);

	num = n >> index;

	return (num & 1);
}
