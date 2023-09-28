#include "main.h"

/**
 * print_binary - printing the Binary value
 * Of the Given value.
 * @n: The given number.
 *
 * Return: It is void (No Return).
 */
void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
