#include "variadic_functions.h"

/*
 * print_numbers - This function takes a variable number
 * of integer arguments, specified by 'n',
 * and prints them to the standard output.
 * The numbers are separated by the 'separator'
 * string, if provided. If 'separator' is NULL,
 * no separator is printed between the numbers.
 * The output is followed by a new line character.
 * @separator: string separator
 * @n: This parameter represents the number of integer arguments
 * @...: This parameter represents a variable number of integer
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
		printf("%d%s", va_arg(ap, int),
				i ? (separator ? : "") : "\n");
	va_end(ap);
}

