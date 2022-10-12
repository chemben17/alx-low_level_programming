#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
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
	new_d->name = name;
	new_d->age = age;
	new_d->owner = owner;
	return (new_d);
}
