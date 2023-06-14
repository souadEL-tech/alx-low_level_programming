#include <stdlib.h>
#include "main.h"

/**
 * free_grid -free 2D array
 * @grid: ptr
 * @height: parameter2
 */

void free_grid(int **grid, int height)
{
	int c;

	for (c = 0; c < height; c++)
	{
		free(grid[c]);
	}
}
