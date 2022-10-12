#ifndef DOG_H
#define DOG_H

/**
 * struct dog - te structure tag name
 * @name: the member name
 * @age: the member age
 * @owner: the owner
 */

struct dog
{
		char *name;
		float age;
		char *owner;
	};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
