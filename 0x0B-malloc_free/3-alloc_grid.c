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

	c = malloc(sizeof(int) * height);

	if (c == NULL)
	{
		free(c);
		return ('\0');
	}

	if (width <= 0 || height <= 0)
	{
		return ('\0');
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			c[i] = malloc(sizeof(int) * width);
			if (c[i] == NULL)
			{
				free(c[i]);
				return ('\0');
			}
			else
			{
			for (j = 0; j < width; j++)
				c[i][j] = '0';
			}
		}
		return (c);
	}
}
