#include "variadic_functions.h"

/**
 * print_char - prints a char
 * @arg: va_list
 * Return: void
*/
void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}
/**
 * print_int - prints int
 * @arg: va_list
 * Return: void
*/
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_float - prints float
 * @arg: va_list
 * Return: void
*/
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * print_string - prints string
 * @arg: va_list
 * Return: void
*/
void print_string(va_list arg)
{
	char *res = va_arg(arg, char *);

	printf("%s", res ? res : "(nil)");
}

/**
 * print_all - prints formate string
 * @format: str
 * Return: void
*/

void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list ptr;
	print_t funcs[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
	};

	va_start(ptr, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4 && (format[i] != funcs[j].symbol))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].func(ptr);
			separator = ", ";
		}
		i++;
	}

	printf("\n");
	va_end(ptr);
}
