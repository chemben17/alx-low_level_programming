#include "main.h"
/**
 * _strlen - Write a function that returns the
 * @s: an argument
 * Return: nothng
 */
int _strlen(char *s)
{
	int c = 0;

	while (*(s + c) != '\0')
		c++;
	return (c);
}

