#include "main.h"
/**
 * free_grid - concat 2 strings in heap
 * @grid: string
 * @height: string
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
		free(grid[i]);
	free(grid);
}
