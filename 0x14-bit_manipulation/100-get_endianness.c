#include "main.h"

/**
 * get_endianness - checking the endianness ends
 *
 * Return: 0 -> big endian, 1 -> little endian
 * Made by: Omar El-Sakka
 */
int get_endianness(void)
{
	unsigned int num;
	char *num2;

	num = 1;
	num2 = (char *) &num;

	return ((int)*num2);
}
