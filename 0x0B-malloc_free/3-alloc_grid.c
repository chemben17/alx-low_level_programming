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

	if (width <= 0 || height <= 0)
	{
		return ('\0');
	}
	else
	{
		c = malloc(sizeof(*c) * height);
		if (c == NULL)
		{
			free(c);
			return ('\0');
		}
		else
		{
			for (i = 0; i < height; i++)
			{
				c[i] = (int *)malloc(sizeof(*c[i]) * width);
				if (c[i] == NULL)
				{
					int a;

					for (a = i; a >= 0; a--)
						free(c[i]);
					free(c);
					return ('\0');
				}
				else
				{
					for (j = 0; j < width; j++)
						c[i][j] = 0;
				}
			}
			return (c);
		}
	}
}
