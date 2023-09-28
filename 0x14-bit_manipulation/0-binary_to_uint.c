#include "main.h"
/**
 * binary_to_uint - Convert numbers from binary to decimal
 * @b: string of 0s and 1s.
 * Return: int Value and 0 if there is an error.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int value;

	if (!b)
		return (0);
	value = 0;
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		value = value * 2 + (*b++ - '0');
	}
	return (value);
}
