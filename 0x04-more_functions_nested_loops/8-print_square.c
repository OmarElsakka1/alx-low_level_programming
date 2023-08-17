#include "main.h"
/**
 * print_square - prints
 * @size: square length
 * Return: 0
*/
void print_square(int size)
{
	int i, j;

	if (size > 0)
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			if (i != size - 1)
				_putchar('\n');
		}
	_putchar('\n');
}
