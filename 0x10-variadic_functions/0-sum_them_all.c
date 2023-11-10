#include "variadic_functions.h"

/**
 * sum_them_all - sum all argument number
 * @n: the number of argument
 * @...: the integers to sum
 *
 * Return: the result of sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int	i;
	va_list		argpoint;
	int		res;

	if (n == 0)
		return (0);
	i = 0;
	res = 0;
	va_start(argpoint, n);
	while (i < n)
	{
		res += va_arg(argpoint, int);
		i++;
	}
	return (res);
}
