#include "main.h"
/**
 * more_numbers - Write a function that prints 10 times the number
 * Return: no return value
 */
void more_numbers(void)
{
	int n, a;

	for (n = 0; n < 10; n++)
	{
		for (a = 0; a <= 14; a++)
		{
			_putchar(a + '0');
		}
		_putchar(10);
	}
	_putchar(10);
}
