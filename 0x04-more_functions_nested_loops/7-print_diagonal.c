#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - write a function that draws a diagonal line.
 * @n: an argument passed into it.
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i, b;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (b = 0; b < 1; b++)
			{
				putchar(' ');
			}
			putchar(92);
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
