#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - a pointer function.
 * @b: te size of space indded to create in the heap
 * Return: none
 */
void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b);

	if (c == NULL)
	{
		return ((void *) 98);
	}
	else
	{
		return ((void *)c);
	}
}
