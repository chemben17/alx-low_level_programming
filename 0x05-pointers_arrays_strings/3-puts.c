#include "main.h"
/**
 * _puts - Write a function that prints a string, followed by a new line
 * @str: the arguments
 * Return: nothing.
 */
void _puts(char *str)
{
	int c = 0;

	while (*(str + c) != '\0')
	{
		_putchar(*(str + c));
		str++;
	}
	_putchar(10);
}
