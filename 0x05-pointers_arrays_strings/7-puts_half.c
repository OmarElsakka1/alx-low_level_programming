#include "main.h"
/**
* puts_half - prints second half of str
* @str: string to be printed
* Return: void
*/

void puts_half(char *str)
{
	int c = 0, i;

	while (str[c] != '\0')
		c++;

	for (i = (c % 2 == 0) ?  c / 2 : (c + 1) / 2; i < c; i++)
		_putchar(str[i]);
	_putchar('\n');
}
