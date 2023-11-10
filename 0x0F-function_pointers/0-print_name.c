#include "function_pointers.h"

/**
 * print_name - this function print a name by pointer function
 * @f: is a pointer to function
 * @name: is a string
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
