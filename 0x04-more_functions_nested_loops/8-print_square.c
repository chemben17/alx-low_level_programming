#include "main.h"
/**
 * print_square -  function that prints a square
 * @size: the argument
 * Return: no return
 */
void print_square(int size)
{
	int a, b;

	for (a = 1; a <= size; a++)
	{
		for (b = 1; b <= a; b++)
		{
			_putchar('#');
		}
		_putchar(10);
	}
	if (size <= 0)
	{
		_putchar(10);

	}
	else
	{
		_putchar(10);
	}
}
