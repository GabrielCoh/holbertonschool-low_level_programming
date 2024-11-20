#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of all the function's parameters
 * @n: unsigned integer
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, j;
	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (i = j = 0; i < n; i++)
	{
		j += va_arg(ap, int);
	}

	va_end(ap);

	return (j);
}
