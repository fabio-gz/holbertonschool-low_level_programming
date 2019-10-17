#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *alloc_grid - pointer to 2d array of ints
 *@width: side of the grid
 *@height: side of the grid
 *Return: pointer to an int
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int n, m;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (n = 0; n < height; n++)
	{
		grid[n] = malloc(width * sizeof(int));

		if (grid[n] == NULL)
		{
			for (n = width; n <= 0; n--)
			{
				free(grid[n]);
			}
			free(grid);
			return (NULL);
		}
		for (m = 0; m < width; m++)
		{
			grid[n][m] = 0;
		}
	}
	return (grid);
}
