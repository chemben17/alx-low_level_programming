#include "main.h"
/**
 * print_numbers - Write a function that prints the numbers
 * Return: it returns nothing
 */
void print_numbers(void)
{
	int number;
	
	for (number = 48; number < 57; number++)
	{
		_putchar(number);
	}
	_putchar(10);
}
