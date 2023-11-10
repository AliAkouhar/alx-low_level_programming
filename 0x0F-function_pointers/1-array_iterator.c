#include "function_pointers.h"

/**
 * array_iterator - a function that printt int by pointer
 * @size: the size of the array
 * @array: array of integers
 * @action: pointer to function
 *
 * Return: Nothing
 */

void	array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t	i;

	i = 0;
	if (size == 0 || !(action))
		return;
	while (i < size)
		action(array[i++]);
}
