#include "main.h"
/**
 * int _isupper - checks for uppercase character
 * @c: the argument passed into the function
 * description: Write a function that checks for u
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (c == 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
