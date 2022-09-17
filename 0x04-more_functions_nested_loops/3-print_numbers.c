#include "main.h"
/**
 * print_numbers - Write a function that prints the numbers
 */
void print_numbers(void)
{
	char number;
	for (number = '0'; number <= '9'; number++)
	{
		_putchar(number);
	}
	_putchar(10);
}
