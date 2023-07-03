#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
int m1, m2, i;
m1 = 0;
m2 = 0;
for (i = 0; i < size; i++)
{
m1 = m1 + a[i * size + i];
}
for (i = size - 1; i >= 0; i--)
{
m2 += a[i * size + (size - i - 1)];
}
printf("%d, %d\n", m1, m2);
}

