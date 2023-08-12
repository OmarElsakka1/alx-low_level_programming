#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - entry point
* Description: Prints characters from a to z in lower and upper cases.
* Return: 0
*/
int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
		printf("%c", 'a' + i);
	for (i = 0; i < 26; i++)
		printf("%c", 'A' + i);

	printf("\n");

	return (0);
}
