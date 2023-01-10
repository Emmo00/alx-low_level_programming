#include<stdlib.h>
/**
 * alloc_grid - return a pointer to a 2d array of int
 * @width: width
 * @height: height
 * Return: pointer to 2d array of int. otherwise NULL
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (height == 0 || width == 0)
		return (NULL);
	grid = (int **)malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (grid[i] == NULL)
			return (NULL);
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid[i][i] = 0;
	return (grid);
}
