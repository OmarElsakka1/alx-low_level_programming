#include "main.h"
/**
 * print_triangle - prints
 * @size: triangle height
 * Return: 0
*/
void print_triangle(int size)
{
	int spc = size - 1, i, j;

	if (size > 0)
		for (j = 0; j < size; j++)
		{
			for (i = 0; i < spc; i++)
				_putchar(' ');
			for (i = 0; i < size - spc; i++)
				_putchar('#');
			_putchar('\n');
			spc--;
		}
	else
		_putchar('\n');
}
