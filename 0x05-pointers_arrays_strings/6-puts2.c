#include "main.h"
/**
 * puts2 -  that prints every other character of a string, startin
 * @str: the argument
 * Return: nothing
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar(10);
}
