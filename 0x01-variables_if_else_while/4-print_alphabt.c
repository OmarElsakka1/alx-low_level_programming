#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - entry point
* Description: Printz from a to z
* Return: 0
*/
int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		if ('a' + i == 'e' || 'a' + i == 'q')
			continue;
		putchar('a' + i);
	}

	putchar('\n');

	return (0);
}
