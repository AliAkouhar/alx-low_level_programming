#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
int i = 0;
while (i < 10)
{
int j = 0;
while (j < 10)
{
int p = i * j;
if (j == 0)
{
	_putchar(p + '0');
}
if (p < 10 && j != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(p + '0');
}
else if (p >= 10)
{
_putchar(',');
_putchar(' ');
_putchar((p / 10) + '0');
_putchar((p % 10) + '0');
}
j++;
}
i++;
_putchar('\n');
}
}
