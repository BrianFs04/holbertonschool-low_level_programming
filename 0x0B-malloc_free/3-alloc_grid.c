#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - pointer to a 2 dimensional array of integers
 * @width: width
 * @height: height
 * Return: the grid
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int h, w;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}

	for (h = 0; h < height; h++)
	{
		grid[h] = malloc(width * sizeof(int));
		if (grid[h] == NULL)
		{
			for (h = width; h >= 0; h--)
			{
				free(grid[h]);
			}
			free(grid);
			return (NULL);
		}
		for (w = 0; w < width; w++)
		{
			grid[h][w] = 0;
		}
	}
	return (grid);
}
