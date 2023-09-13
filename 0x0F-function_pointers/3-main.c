#include "3-calc.h"
/**
 * main - entry point
 * @argc: num of args
 * @argv: params
 * Return: 0
*/

int main(int argc, char **argv)
{
	int a, b;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	func = get_op_func(argv[2]);
	printf("%d\n", func(a, b));
	return (0);
}
