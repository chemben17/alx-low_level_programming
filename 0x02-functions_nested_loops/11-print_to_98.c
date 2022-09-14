#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints the natural no
 * @n: the argument of the function given
 * Return: 0
 */
void print_to_98(int n)
{
	int v;

	v = n;

	if (n > 98)
	{
		for (v = n; v >= 98; v--)
		{
			printf("%d", v);
			if (v != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	else
	{
		for (v = n; v <= 98; v++)
		{
			printf("%d", v);
			if (v != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}
