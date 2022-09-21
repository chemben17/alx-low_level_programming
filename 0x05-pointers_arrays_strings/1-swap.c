#include "main.h"
/**
 * swap_int - Write a function that swaps the values of two integers
 * @a: the argument
 * @b: the second argument
 * Return: nothig s retrned
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
