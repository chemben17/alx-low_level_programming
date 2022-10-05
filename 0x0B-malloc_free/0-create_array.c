#include <stdlib.h>
#include "main.h"

/**
 * create_array - function that creates an array of char
 * @size: the size of the c array
 * @c: the character
 * Return: a char or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *b;
	int i;

	if (size == 0)
		return ('\0');

	b = malloc(sizeof(char) * size);

	if (b != NULL)
	{
		for (i = 0; i < size; i++)
		{
			b[i] = c;
		}
		b[i] = '\0';
	}
	else
	{
		return ('\0');
	}
	return (b);
}
