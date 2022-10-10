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
	int i, j, a;

	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		;
	char *c = malloc(sizeof(char *) * (i + n + 1));

	if (c == NULL)
		result = '\0';
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			c[i] = s1[i];
		if (n == 0)
		{
		}
		else
		{
			if (n >= j)
			{
				for (a = 0; s2[a] != '\0'; a++, i++)
				{
					c[i] = s2[a];
				}
			}
			else
			{
				for (j = 0; j < n; j++, i++)
				{
					c[i] = s2[j];
				}
			}
		}
		c[i] = '\0';
		result = c;
	}
	return (result);
}
