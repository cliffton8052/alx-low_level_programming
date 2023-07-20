#include "variadic_functions.h"

/**
 * sum_them_all - Calculates the sum of a variable number of integers.
 * @n: The number of integers to be summed.
 * @...: integers to sum
 * Return: sum of ints
 */

int sum_them_all(const unsigned int n, ...)
{
	int j = 0, i = n;
	va_list ap;

	if (!n)
		return (0);
	va_start(ap, n);
	while (i--)
		j = j + va_arg(ap, int);
	va_end(ap);
	return (j);
}
