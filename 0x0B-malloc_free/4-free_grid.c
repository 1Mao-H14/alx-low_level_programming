#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees A 2d Array LENGETHES
 * @grid: 2d grid
 * @height: height dimension of grid
 *
 * Description: frees memory of grid
 * Return: nothing
 *
 */

void free_grid(int **grid, int height)

{

	int v;

	for (v = 0; v < height; v++)

	{

		free(grid[v]);

	}

	free(grid);

}
