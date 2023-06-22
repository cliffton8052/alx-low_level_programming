#include <stdio.h>
#include "math.h"

/**
 * main - Entry point for program finding largest prime number
 * Return: o (pass)
 */

int main(void)
{
	long int n, max;
	long int number = 612852475143;
	double square = sqrt(number);

	for (n = 1; n <= square; n++)
	{
		if (number % n == 0)
		{
			max = number / n;
		}
	}
	printf("%ld\n", max);

	return (0);
}
