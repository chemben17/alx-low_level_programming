#include <stdio.h>
#include "dog.h"
/**
 * print_dog - The function name. It prints the members of a struc
 * @d: The new varaiable of the struc
 * Return: no return
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
