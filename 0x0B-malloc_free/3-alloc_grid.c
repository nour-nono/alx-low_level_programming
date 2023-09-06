#include "main.h"

/**
 * alloc_grid - concat 2 strings in heap
 * @width: string
 * @height: string
 * Return: string.
 */

int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;

	if (width > 0 && height > 0)
	{
		int **grid;

		grid = malloc(sizeof(*grid) * width);
		if (grid == NULL)
			return (NULL);
		while (i < height)
		{
			grid[i] = malloc(sizeof(**grid) * height);
			if (grid[i] == NULL)
			{
				while (i >= 0)
				{
					--i;
					free(grid[i]);
				}
				free(grid);
				return (NULL);
			}
			j = 0;
			while (j < width)
			{
				grid[i][j] = 0;
				++j;
			}
			++i;
		}
		return (grid);
	}
	else
	{
		return (NULL);
	}
}
