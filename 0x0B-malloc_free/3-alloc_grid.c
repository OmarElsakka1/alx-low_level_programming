#include "main.h"
/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers.
* @width: int
* @height: int
* Return: pointer to 2D arr
*/

int **alloc_grid(int width, int height)
{
	int i, j;
	int **out;

	if (width <= 0 || height <= 0)
		return (NULL);

	out = malloc(sizeof(int *) * height); /* Array of arrays*/

	if (!out)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		/* each individual array is initialized */
		out[i] = malloc(sizeof(int) * width);
		if (out[i] == NULL)
		{
			/* free the whole 2d array */
			for (j = 0; j < i; j++)
				free(out[j]);
			free(out);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			out[i][j] = 0;
	}

	return (out);
}
