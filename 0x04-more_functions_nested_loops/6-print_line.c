#include "main.h"
/**
 * print_line - Write a function that draws a straight line in the terminal
 * @n: the argument
 * Return: no return value
 */
void print_line(int n)
{
	int a;

	for (a = 1; a <= n; a++)
	{
		_putchar('_');
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
