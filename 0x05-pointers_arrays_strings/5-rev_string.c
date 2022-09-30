#include "main.h"
/**
 * rev_string - Write a function that reverses a string
 * @s: The argument array passed into it
 * Return: nothing
 */
void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i < 0)
	{
		i--;
		_putchar(s[i]);
	}
	_putchar(10);
}
