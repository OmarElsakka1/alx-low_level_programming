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
		putchar('z' - i);
	}

	putchar('\n');

	return (0);
}
