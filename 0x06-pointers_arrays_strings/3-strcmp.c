#include <stdio.h>
#include "main.h"

/**
 * _strcmp - the function compare two strings
 * @s1: the first array
 * @s2: the second array
 * Return: it returns the ASCII diff
 */
int _strcmp(char *s1, char *s2)
{
	int result = 0;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			result = (*s1 - *s2);
			break;
		}
	}
	return (result);
}
