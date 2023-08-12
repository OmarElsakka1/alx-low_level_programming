#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - entry point
* Description: Printz characters from a to z
* Return: 0
*/
int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
		printf("%c", 'a' + i);

	printf("\n");

	return (0);
}
