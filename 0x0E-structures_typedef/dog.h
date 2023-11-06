#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - a struct dog
 * @name: a pointer pointed to char
 * @age: a float variable
 * @owner: pointer pointed to a char
 * Description: a struct project
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
