#include "main.h"
/**
 * print_last_digit - prints the last digit of the parameter passed into it
 *
 * @c: the argument of the function
 * Return: idk 0
 */
int print_last_digit(int c)
{
	int remainder;

	remainder = c % 10;

	if (c < 0)
	{
		remainder *= -1;
	}
	_putchar(remainder + '0');

	return (remainder);
}
