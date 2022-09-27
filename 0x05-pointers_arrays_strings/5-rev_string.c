#include "main.h"
/**
 * rev_string - Write a function that reverses a string
 * @s: The argument array passed into it
 * Return: nothing
 */
void rev_string(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		_putchar(s[i]);
		i++;
	}
	_putchar(10);
	i = 0;
	while (s[i])
	{
		i++;
	}
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar(10);
}
