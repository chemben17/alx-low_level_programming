#include <stdlib.h>
#include "main.h"
/**
 * free_grid - the 2D array passed into the function
 * @grid: the array gan gan
 * @height: the height of the array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
