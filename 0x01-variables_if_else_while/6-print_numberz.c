#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - We are starting right here
* Description: Prints numbers from 0 to 10 using putchar
* Return: 0
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}

	putchar('\n');

	return (0);
}
