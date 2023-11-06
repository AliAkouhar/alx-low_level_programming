#include "dog.h"
#include <stdio.h>

/**
 * print_dog - printing element of struct dog
 * @d: the struct
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (!d)
		return (NULL);
	if (d->name)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)");
	if (!d->age)
		printf("Age: (nil)");
	else
		printf("Age: %f\n", d->age);
	if (!d->owner)
		printf("Owner: (nil)");
	else
		printf("Owner: %s\n", d->owner);
}
