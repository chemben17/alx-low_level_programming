#include <stdio.h>
#include "dog.h"
/**
 * init_dog - the dunction name
 * @d: the structure varaible
 * @name: the name of the structure variable
 * @age: the age f the structure variable
 * @owner: the owner of the dog
 * Return: none
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
