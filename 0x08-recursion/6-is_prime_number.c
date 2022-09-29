#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - it can't work
 * @n: the argument
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n == 3 || n == 2)
		return (1);
	else if (n % 2 == 0)
		return (0);
	else if (n % 3 == 0)
		return (0);
	else if (n <= 1)
		return (0);
	else
		return (1);
}
