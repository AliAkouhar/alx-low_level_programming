#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * check - check if the argument is digit
 * @argc: the size of array
 * @argv: the array
 * Return: 0 or 1
 */
int check(int argc, char *argv[])
{
        int i = 1;
        int count = 0;

        while (i < argc)
        {
                if (isdigit(atoi(argv[i])) == 0)
                {
                        count++;
                }
                i++;
        }
        return (count);
}
/**
 * main - the function that adds digits
 * @argc: the size of array
 * @argv: the array
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
        int i;
        int sum;
        int flag = check(argc, argv);

        printf("%i\n", flag);
        i = 1;
        sum = 0;
        while (i < argc)
        {
                if (flag == argc)
                {
                        sum += atoi(argv[i]);
                }
                else
                {
                        printf("Error\n");
                        return (1);
                }
                i++;
        }
        printf("%i\n", sum);
        return (0);
}
                        
