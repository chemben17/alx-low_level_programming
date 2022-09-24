#include "main.h"
/**
 * print_triangle - Write a function that prints a triangle
 * @size: the triangle's height
 * Return: none;
 */
void print_triangle(int size)
{
	int a, b;

	a = 1;

	if (size > 0)
	{
		while (a <= size)
		{
			b = 0;
			while (b < (size - a))
			{
				_putchar(' ');
				b++;
			}
			b = 0;
			while (b < a)
			{
				_putchar('#');
				b++;
			}
			_putchar('\n');
			a++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
