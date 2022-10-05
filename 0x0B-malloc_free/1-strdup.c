#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * _strdup - a function that prints the value of
 * @str: the arg pased
 * Return: a char
 */
char *_strdup(char *str)
{
	char *b;

	if (str == NULL)
		return ('\0');

	b = malloc(sizeof(str));
	if (b != NULL)
	{
		int i;

		for (i = 0; str[i]; i++)
			;

		int x;

		for (x = 0; x < i; x++)
		{
			b[x] = str[x];
		}
	}
	else
	{
		return ('\0');
	}
	return (b);
}
