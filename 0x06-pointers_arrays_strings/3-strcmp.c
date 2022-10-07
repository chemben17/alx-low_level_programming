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
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			result = (s1[i] - s2[i]);
			break;
		}
		i++;
	}
	return (result);
}
