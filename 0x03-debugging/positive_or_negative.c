#include "main.h"

/**
 * positive_or_negative - prints a positive or a negative number
 * @n - positive or negative number
 * Return: 0 (Success)
 */

void positive_or_negative(int n);
{

	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);

	return (0);
}
