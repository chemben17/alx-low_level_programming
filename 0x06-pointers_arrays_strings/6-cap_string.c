#include <stdlib.h>
#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string.
 * @str: the string
 * Return: returns the capitalized string
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if ((str[i] == ' ') || (str[i] == ' ') || (str[i] == '\n') || str[i] == '\t')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] -= 32;
			}
			else
				continue;
		}
	}
	return (str);
}
