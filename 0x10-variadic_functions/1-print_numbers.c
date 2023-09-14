#include "variadic_functions.h"
/**
 * print_numbers - prints num separated by a string
 * @separator: separator string
 * @n: num of args
 * Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ptr, int));
		if (i != n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");

	va_end(ptr);
}
