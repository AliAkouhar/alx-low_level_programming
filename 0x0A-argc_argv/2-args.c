#include <stdio.h>
/**
* main - Entry point
* @ac: the number of parametrs
* @av: strring that handling parametrs
* Return: Always 0 (Success)
*/
int	main(int ac, char **av)
{
	int	i;

	i = 0;
	while (av[i])
	{
		printf("%s\n", av[i]);
		i++;
	}
	return (0);
}
