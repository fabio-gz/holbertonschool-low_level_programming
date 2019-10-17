#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *free_grid - free 2d grid
 *@grid: double pointer to grid
 *@height: size
 *Return: void
 */
void free_grid(int **grid, int height)
{
	int n;

	for (n = 0; n < height; n++)
	{
		free(grid[n]);
	}
	free(grid);
}
