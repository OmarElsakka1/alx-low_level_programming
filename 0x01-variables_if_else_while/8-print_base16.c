#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - We are working right here
* Description: Prints numbers in hexadecimal from 0 to f
* Return: 0
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}
	for (i = 0; i < 6; i++)
	{
		putchar('a' + i);
	}

	putchar('\n');

	return (0);
}
