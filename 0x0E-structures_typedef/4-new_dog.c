#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - the new funcion name
 * @name: the dog name
 * @age: the dog's age
 * @owner: the dog's owner
 * Return: the new array
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;

	new_d = malloc(sizeof(dog_t));
	if (new_d == NULL)
		return (NULL);
	int namelen, ownerlen;

	namelen = strlen(name);
	ownerlen = strlen(owner);
	new_d->name = malloc(sizeof(namelen + 1));
	if (new_d->name == NULL)
	{
		free(new_d);
		return (NULL);
	}
	new_d->owner = malloc(sizeof(ownerlen + 1));
	if (new_d->owner == NULL)
	{
		free(new_d->name);
		free(new_d);
		return (NULL);
	}
	new_d->name = strcpy(new_d->name, name);
	new_d->age = age;
	new_d->owner = strcpy(new_d->owner, owner);
	return (new_d);
}
