#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - a function that concatenate two strings
 * @s1: the frst array
 * @s2: the second array
 * @n: the number of chr to copied from s2
 * Return: return the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	int i, j;

	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		;

	char *c = malloc(sizeof(char *) * (i + n + 1));
	if (c == NULL)
	{
		result = '\0';
	}
	else
	{
		i = 0;
		while (*s1 != '\0')
		{
			c[i] = *s1;
			(void)*s1++;
			i++;
		}
		if (n == 0)
		{
			c[i] = '\0';
			result = c;
		}
		else
		{
			if (n >= j)
			{
				while (*s2 != '\0')
				{
					c[i] = *s2;
					i++;
					(void)*s2++;
				}
				c[i] = '\0';
				result = c;
			}
			else
			{
				j = 0;
				while (j < n)
				{
					c[i] = s2[j];
					j++;
					i++;
				}
				c[i] = '\0';
				result = c;
			}
		}
	}
	return (result);
}
