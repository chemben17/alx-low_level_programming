#include "main.h"
/**
 * puts2 -  that prints every other character of a string, startin
 * @str: the argument
 * Return: nothing
 */
void puts2(char *str)
{
	int c = 0;

	while (*(str + c) != '\0')
	{
		if (c % 2 == 0)
		{
			_putchar(*(str + c));
		}
		c++;
	}
	_putchar(10);
}
