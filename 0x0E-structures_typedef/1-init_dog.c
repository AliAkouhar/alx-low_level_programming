#include "dog.h"

/**
 * init_dog - function in this code
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's dog
 * @d: a pointer pointed to a struct
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
