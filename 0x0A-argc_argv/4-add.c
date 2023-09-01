#include<stdio.h>
#include<stdlib.h>
/**
 * main - entry point
 * @argc: num of args
 * @argv: params
 * Return: 0
*/

int main(int argc, char **argv)
{
	int sum = 0, i = 1, j;

	while (argv[i])
	{
		for (j = 0; argv[i][j]; j++)
			if (argv[i][j] < '0' || argv[i][j] > '9')
				return (printf("Error\n"), 1);

		sum += atoi(argv[i]);
		i++;
	}

	printf("%d\n", sum);
	return (0);
	(void) argc;
}
