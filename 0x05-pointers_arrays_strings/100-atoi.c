#include <stdio.h>
#include "main.h"
#include <time.h>
/**
 * _atoi - like i care.
 * @s: the array
 * Return: 0
 */
int _atoi(char *s)
{
	int i = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			continue;
			return (0);
		}
		if (s[i] >= 0)
		{
			return (s[i]);
		}
	}
}
