#include "variadic_functions.h"

/**
 * print_strings - print strings separated by a separator
 * @separator: the separator
 * @n: numberof argument
 * @...: the other argument
 *
 * Return: void
 */

void	print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int	i;
	va_list		ptr;
	char		*str;

	va_start(ptr, n);
	i = 0;
	while (i < n)
	{
		str = va_arg(ptr, char*);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if ((i != n - 1) && separator)
			printf("%s", separator);
		 i++;
	}
	printf("\n");
	va_end(ptr);
}
