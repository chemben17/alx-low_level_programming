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
	int i;
	int x;

	if (str == NULL)
		return ('\0');

	b = malloc(sizeof(str));
	if (b != NULL)
	{
		for (i = 0; str[i]; i++)
			;

		for (x = 0; x < i; x++)
		{
			b[x] = str[x];
		}
		b[x] = '\0';
	}
	else
	{
		return ('\0');
	}
	return (b);
}
