#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - write a function that draws a diagonal line.
 * @n: an argument passed into it.
 * Return: nothing
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		for (int i = 1; i <= n; i++)
		{
			_putchar('\\');
			_putchar(10);
			for (int j = 0; j < i; j++)
			{
				_putchar(' ');
			}
		}
		_putchar(10);
	}
	else
	{
		_putchar(10);
	}
}
