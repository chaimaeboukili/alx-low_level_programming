#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: amount of the arguments.
 *
 * Return: sum of its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list va;
	int sum = 0, i = n;

	if (n == 0)
		return (0);

	va_start(va, n);
	while (i--)
		sum += va_arg(va, int);
	va_end(va);

	return (sum);
}
