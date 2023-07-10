#include"main.h"
#include<stdlib.h>
/**
 * _strdup - allocate memory and create a copy of a strint given
 * @str: is the string given from main function
 * Return:NULL or a string
 */
char *_strdup(char *str)
{
	int i, j;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}	       
	p = malloc(sizeof(char) * i);

	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
	j = 0;
	while (j < i)
	{
		*(p + j) = *(str + j);
		j++;
	}
	return (p);
	}
}


