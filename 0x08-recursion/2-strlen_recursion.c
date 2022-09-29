#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion -  a function that returns length of string
 * @s: the string argument passed into it.
 * Return: the length f the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
