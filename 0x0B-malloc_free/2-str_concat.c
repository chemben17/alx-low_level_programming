#include <stdlib.h>
#include "main.h"

/**
 * str_concat - efimi le ooo
 * @s1: okay
 * @s2: okay
 * Return: nothing
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	char *c;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + len1) != '\0')
		len1++;
	while (*(s2 + len2) != '\0')
		len2++;

	c = malloc(1 + (len1 * sizeof(*s1)) + (len2 * sizeof(*s2)));

	if (c == NULL)
		return ('\0');

	for (i = 0; i < len1; i++)
		c[i] = *(s1 + i);
	for (j = 0; j < len2; j++, i++)
		c[i] = *(s2 + j);

	return (c);
}
