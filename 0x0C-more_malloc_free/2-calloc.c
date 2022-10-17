#include <stdlib.h>
#include "main.h"
/**
 * _calloc - a function that works exactly like calloc
 * @nmemb: the number of elements in the array
 * @size: The size of the elements in the array
 * Return: no return value
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < nmemb; i++)
		{
			*(ptr + i) = 0;
		}
		return (ptr);
	}
}
