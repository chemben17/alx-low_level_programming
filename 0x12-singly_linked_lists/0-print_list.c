#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - a fnction that prints alist
 * @h: the pointer to the pointer
 * Return: return the number of nodes present
 */
size_t print_list(const list_t *h)
{
	size_t numOfNodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] (nil)\n", 0);
		}
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		numOfNodes++;
	}
	return (numOfNodes);
}
