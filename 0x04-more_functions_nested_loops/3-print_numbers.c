#include "main.h"
#include <stdio.h>
/**
 * print_numbers - Write a function that prints the numbers
 * Return: it returns nothing
 */
void print_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		_putchar(n);
	}
	_putchar(10);
}
