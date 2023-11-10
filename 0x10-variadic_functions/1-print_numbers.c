#include "variadic_functions.h"

/**
 * print_numbers - print numbers separated by a separator
 * @separator: the separator
 * @n: numberof argument
 * @...: the other argument
 *
 * Return: void
 */

void	print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int	i;
	va_list		ptr;

	va_start(ptr, n);
	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(ptr, int));
		if (i != n - 1 && separator)
			printf("%s", separator);
		 i++;
	}
	printf("\n");
	va_end(ptr);
}
