#include "main.h"
/**
 * print_diagonal - Write a function that draws a diagonal line on the terminal.
 * @n: the argument
 * Return: no return
 */
void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			if (a == (n -1))
			{
				continue;
			}
			_putchar(10);
		}
	}
	_putchar(10);
}
