#include "main.h"
/**
 * _puts - prints str followed by new line
 * @str: string to be printed (char[])
 * Return: void
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');

}
