#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - entry point
 * Return: 0
*/

int main(void)
{
	int sum = 0;
	char c;

	srand(time(NULL));
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar(2772 - sum);
	return (0);
}
