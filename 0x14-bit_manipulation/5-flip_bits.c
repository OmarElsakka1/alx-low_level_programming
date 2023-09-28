#include <stdio.h>
#include "main.h"

/**
 * flip_bits - fliping bits to convert number to another
 * @n: The first number
 * @m: The second number (Target)
 * Return: number of bits that should be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff_bit_num;
	int count;

	diff_bit_num = n ^ m;
	count = 0;

	while (diff_bit_num)
	{
		count++;
		diff_bit_num &= (diff_bit_num - 1);
	}

	return (count);
}
