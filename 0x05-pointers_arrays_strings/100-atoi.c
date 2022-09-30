#include <stdio.h>
#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: the argument
 * Return: 0
 */
int _atoi(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			continue;
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			continue;
		}
		else if (s[i] >= 0)
		{
			_putchar(s[i]);
		}
		else if (s[i] == '-' || s[i] == '+')
		{
			_putchar(s[i]);
		}
	}
}
