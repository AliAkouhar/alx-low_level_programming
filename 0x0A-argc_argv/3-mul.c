#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - print multiplies of two int
 * @argc: size of the array
 * @argv: the array of char
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
