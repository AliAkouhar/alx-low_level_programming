#include "main.h"
#include <stdio.h>
/**
 * main - printed the number of elements of argv
 * @argc: size of the array
 * @argv: array passed
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%i\n", argc - 1);
	return (0);
}
