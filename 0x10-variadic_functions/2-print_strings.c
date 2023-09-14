#include "variadic_functions.h"
/**
 * print_strings - prints strings separated by a string
 * @separator: separator string
 * @n: num of args
 * Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
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
		char *res = va_arg(ptr, char*);

		printf("%s", res ? res : "(nil)");
		if (i != n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");

	va_end(ptr);
}
