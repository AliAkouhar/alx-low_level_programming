#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
for (int i = 0; i < 10; i++)
{
for (int j = 0; j < 10; j++)
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
}
_putchar('\n');
}
}
