#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion -  natural square root of a numbe
 * sqr - nothing
 * @n: the actual number to determine
 * @i: the varying num.
 * Return: root or -1
 */
int sqr(int n, int i)
{
	if (i * i == n)
		return (i);
	else if ((i * i != n) && (i >= n / 2))
		return (-1);

	return (sqr(n, i + 1));
}

int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}
