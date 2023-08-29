#include "main.h"
/**
* print_diagsums - print NxN matrix trace and trace'
* @a: matrix
* @size: N
* Return: void
*/

void print_diagsums(int *a, int size)
{
	int i, j, s1 = 0, s2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				s1 += a[i * size + j];

			if (j == size - i - 1)
				s2 += a[i * size + j];
		}
	}
	printf("%d, %d\n", s1, s2);
}
