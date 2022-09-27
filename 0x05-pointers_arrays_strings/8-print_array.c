#include "main.h"
#include <stdio.h>
/**
 * print_array -  prints n elements of an array of integers
 * @a: an argument
 * @n: an argument
 * Return: no return
 */
void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		if (c < (n - 1))
			printf("%d, ", a[c]);
		else
			printf("%d\n", a[c]);
	}
}
