#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* @ac: number of parametrs
* @av: parametrs
* Return: Always 0 (Success)
*/

int     main(int ac, char **av)
{
	if (ac == 3)
	{
		int     res;

		res = atoi(av[1]) + atoi(av[2]);
		printf("%i\n", res);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
