#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include<stdarg.h>
#include<stdio.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct print - A new struct type defining our print
 *
 * @symbol: char representing the data type
 * @func: func ptr that prints according to symbol
*/
typedef struct print
{
	char symbol;
	void (*func)(va_list arg);
} print_t;

#endif
