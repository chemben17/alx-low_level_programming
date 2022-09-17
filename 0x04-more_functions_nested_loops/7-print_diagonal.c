#include "main.h"
/**
 * print_diagonal - Write a function that draws a diagonal line on the terminal.
 * @n: the argument
 * Return: no return
 */
void print_diagonal(int n)
{
	int a, b;

	for (a = 1; a <= n; a++)
	{
		for (b = 1; b < 2; b++)
		{
			_putchar("\\");
		}
		_putchar(' ');
	}
	if (a <= 0)
	{
		_putchar(10);
	}
	else
	{
		_putchar(10);
	}
}
