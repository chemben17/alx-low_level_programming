#include "main.h"
/**
 * print_diagonal - write a function that draws a diagonal line.
 * @n: an argument passed into it.
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('\\');
			if (i == n)
			{
				_putchar('\n');
			}
			if (n > 1 && i < (n))
			{
				_putchar('\n');
				for (j = 0; j < i; j++)
				{
					_putchar(' ');
				}
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
