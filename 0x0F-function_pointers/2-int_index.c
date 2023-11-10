#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @array: target array holding integers
 * @size: array size
 * @cmp: function pointer to compare search integer term
 *
 * Return: int element match, -1 if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int	i;

	i = 0;
	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}
