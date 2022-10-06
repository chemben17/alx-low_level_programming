#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - that returns a pointer to a 2 dimensional
 * @width: the width of the array
 * @height: the height of the array
 * Return: NULL or te string
 */
int **alloc_grid(int width, int height)
{
	int **c;
	int i, j;

	if ((width <= 0) || (height <= 0))
		return ('\0');

	c = malloc(sizeof(**c) * (width + height));
	if (c == NULL)
	{
		free(c);
		return ('\0');
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			c[i][j] = '0';
	}
	return (c);
}
