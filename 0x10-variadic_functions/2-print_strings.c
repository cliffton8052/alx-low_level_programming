#include "variadic_functions.h"

/**
 * print_strings - Prints strings followed by a new line.
 * This function takes a variable number of string arguments,
 * specified by 'n',
 * and prints them to the standard output.
 * The strings are separated by the 'separator'
 * string, if provided. If 'separator' is NULL,
 * no separator is printed between the strings.
 * If any of the strings are NULL, it prints "(nil)"
 * instead of the NULL string.
 * The output is followed by a new line character.
 * @separator: The string to be printed between strings (can be NULL).
 * @n: The number of strings to be printed.
 * @...: The variable number of string arguments to be printed.
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *str;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
		printf("%s%s", (str = va_arg(ap, char *)) ? str : "(nil)",
				i ? (separator ? separator : "") : "\n");
	va_end(ap);
}
