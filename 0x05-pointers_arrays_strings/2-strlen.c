#include "main.h"
/**
 * _strlen - Write a function that returns the
 * @s: an argument
 * Return: nothng
 */
int _strlen(char *s)
{
	int length = 0;
	int i = 0;

	while (s[i] != 0)
	{
		length += 1;
		i++;
	}
	length += 1;
	return (length);
}

