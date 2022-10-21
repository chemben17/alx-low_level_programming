#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * list_len - a function that returns the number of elements
 * @h: the pointer to the elemnts
 * Return: returns the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t no_Of_elements = 0;

	while (h != NULL)
	{
		h = h->next;
		no_Of_elements++;
	}
	return (no_Of_elements);
}
