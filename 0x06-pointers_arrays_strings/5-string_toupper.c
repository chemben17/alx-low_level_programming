#include <stdio.h>
#include "main.h"
/**
 * string_toupper - changes lowercase in a string to upper
 * @str: the input string
 * Return: none
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		else
		{
			continue;
		}
	}
	return (str);
}
