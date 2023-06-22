#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * positive_or_negative - checks if a number is positive or negative.
 * @n: the number to be checked
 * Return: 1
 */

void positive_or_negative(int n)
{

	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{

		printf("%i is zero\n", n);
	}
	else
	{
		printf("%i is negative\n", n);
	}

}


