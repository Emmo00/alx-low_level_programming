#include<stdlib.h>
/**
 * free_grid - free a 2d grid
 * @grid: 2d array
 * @height: height
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
