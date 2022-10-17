#include <stdlib.h>
#include "main.h"
/**
 * _realloc - writing the base code of realloc using malloc
 * @ptr: the previously allocated pointer
 * @old_size: the size of the ptr pointer
 * @new_size: The desired size of the to be allocated space
 * Return: depends on the situation
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return ('\0');

		return (new_ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return ('\0');
	}

	new_ptr = malloc(new_size);

	if (!new_ptr)
		return ('\0');

	for (i = 0; i < old_size; i++)
		*((char *)new_ptr + i) = *((char *)ptr + i);

	free(ptr);
	return ((void *)new_ptr);
}
