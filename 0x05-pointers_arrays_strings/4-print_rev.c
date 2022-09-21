#include "main.h"
#include <string.h>
/**
 * print_rev -  that prints a string, in reverse
 * @s: the argument
 * Return: nothing
 */
void print_rev(char *s)
{
	int c = strlen(s);

	while (c--)
	{
		_putchar(*(s + c));
	}
	_putchar(10);
}
