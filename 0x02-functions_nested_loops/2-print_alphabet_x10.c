#include "main.h"
/**
* print_alphabet_x10 - print all alphabet x10 in lowercase
*/
void print_alphabet_x10(void)
{

int i = 0;
while (i < 10)
{
char c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
i++;
}
}
