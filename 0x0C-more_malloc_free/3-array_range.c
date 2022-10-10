#include <stdlib.h>
#include "main.h"
/**
 * array_range - a function that creates an array of integers
 * @min: the min number input
 * @max: max num inputtted
 * Return: nothng
 */
int *array_range(int min, int max)
{
	int *a;
	int i;
	int b = 0;

	if (min > max)
		return (NULL);
	if (max >= min)
	{
		int j = (max - min) + 1;

		a = malloc(sizeof(int) * (j));

		if (a == NULL)
			return (NULL);
		if (a != NULL)
		{
			for (i = min; i <= max; i++, b++)
				a[b] = i;
		}
	}
	return (a);
}
