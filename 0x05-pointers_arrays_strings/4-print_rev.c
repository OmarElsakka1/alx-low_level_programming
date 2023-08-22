#include"main.h"
/**
* print_rev - prints reverse string
* @s: string to be printed
* Return: void
*/

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	while (len--)
		_putchar(s[len]);

	_putchar('\n');
}
