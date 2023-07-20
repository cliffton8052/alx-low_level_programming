#include "variadic_functions.h"

/*
 * print_numbers - This function takes a variable number
 * @separator: string separator
 * @n: integer variables to be separated
 * @...: num args to be printed
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(ap, n);

	while (i--)
	{
		printf("%d%s", va_arg(ap, int), (i && separator) ? separator : "");
	}

	va_end(ap);

	printf("\n");
}

