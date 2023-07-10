#include"main.h"
#include<stdlib.h>
/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: create array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *s = malloc(sizeof(char) * size);
	unsigned int i;

	if (size == 0 || s == NULL)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (i < size)
		{
			*(s + i) = c;
			i++;
		}
		return (s);
	}
}
