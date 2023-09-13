#include "3-calc.h"
/**
 * op_add - adds 2 int
 * @a: int 1
 * @b: int 2
 * Return: result in int
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subs 2 int
 * @a: int 1
 * @b: int 2
 * Return: result in int
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mult 2 int
 * @a: int 1
 * @b: int 2
 * Return: result in int
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - div 2 int
 * @a: int 1
 * @b: int 2
 * Return: result in int
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - div 2 int
 * @a: int 1
 * @b: int 2
 * Return: result in int
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
