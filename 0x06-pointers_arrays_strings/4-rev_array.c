#include <stdlib.h>
#include "main.h"
/**
 * reverse_array - function that reverses the content
 * @a: the integer array
 * @n: the lenrht of the array
 * Return: no return alue
 */
void reverse_array(int *a, int n)
{
	int b = n - 1;
	int c = 0;
	int k;

	while (b >= c)
	{
		k = a[c];
		a[c] = a[b];
		a[b] = k;
		b--;
		c++;
	}
}
