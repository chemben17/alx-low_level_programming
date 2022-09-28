#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - Write a function that prints a string
 * @s: the array argument
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		putchar(10);
		return;
	}

	_putchar(s[0]);
	_puts_recursion(s + 1);
}

