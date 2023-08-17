#include "main.h"
/**
 * print_diagonal - prints
 * @n: line length
 * Return: 0
*/
void print_diagonal(int n)
{
	int spc = 0;

	if (n > 0)
		while (n--)
		{
			int spc2 = spc;

			while (spc2--)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
			spc++;
		}
	else
		_putchar('\n');
}
