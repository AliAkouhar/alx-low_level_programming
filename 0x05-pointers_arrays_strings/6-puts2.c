#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int l = 0;
	int w = 0;
	char *y = str;
	int j;

	while (*y != '\0')
	{
		y++;
		l++;
	}
	w = l - 1;
	for (j = 0 ; j <= w ; j++)
	{
		if (j % 2 == 0)
	{
		_putchar(str[j]);
	}
	}
	_putchar('\n');
}

