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

	for (i = 0; s[i] = '\0'; i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			continue;
		}
		else if (s[i] == '-' || s[i] == '+')
		{
			putchar(s[i]);
		}
		else if (s[i] >= '0' || s[i] <= '9')
		{
			putchar(s[i]);
		}
	}
	return (0);
}
