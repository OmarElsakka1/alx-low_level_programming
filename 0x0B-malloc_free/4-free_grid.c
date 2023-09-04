#include "main.h"
/**
* free_grid - frees a 2D array completelly
* @grid: 2d array to be free
* @height: number of rows
* Return: void
*/

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
