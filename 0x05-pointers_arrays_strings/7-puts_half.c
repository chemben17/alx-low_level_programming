#include "main.h"
/**
 * puts_half - that prints half of a string
 * @str: the string argument
 * Return: nothing
 */
void puts_half(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		i++;
	}
	if (i > 0)
	{
		if (i % 2 == '\0')
		{
			int a = (i / 2);
			int b;

			for (b = a; b <= i; b++)
			{
				_putchar(str[b]);
			}
		}
		else
		{
			int a = ((i - 1) / 2) + 1;
			int b;

			for (b = a; b <= i; b++)
			{
				_putchar(str[b]);
			}
		}
	}
	_putchar(10);
}
