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
	if (argc - 1 == 1)
	{
		int cents = atoi(argv[1]), change = 0;

		while (cents > 0)
		{
			if (cents >= 25)
				cents -= 25;
			else if (cents >= 10)
				cents -= 10;
			else if (cents >= 5)
				cents -= 5;
			else if (cents >= 2)
				cents -= 2;
			else
				cents--;

			change++;
		}
		printf("%d\n", change);
	}
	else
		return (printf("Error\n"), 1);

	return (0);
}
