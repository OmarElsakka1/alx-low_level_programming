#include "main.h"
/**
 * more_numbers - prints
 * Return: 0
*/
void more_numbers(void)
{
	int i, c = 10;

	while (c--)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
				_putchar('0' + i / 10);
			_putchar('0' + i % 10);
		}
		_putchar('\n');
	}
}
