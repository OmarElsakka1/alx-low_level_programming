#include "main.h"

/**
 * clear_bit - Setting a certain bit to be 0 at certain
 * Index
 * @n: number to set bit 
 * @index: The index of bit to set to be 0
 * Return: 1 -> Success, or -1 Fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 0x01;

	num = ~(num << index);
	if (num == 0x00)
		return (-1);
	*n &= num;
	return (1);
}
