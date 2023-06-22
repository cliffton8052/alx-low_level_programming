#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * positive_or_negative - checks if a number is positive or negative.
 * @i - the number to be checked
 * Return: 1
 */

void positive_or_negative(int i)
{
	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{

		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}

	return (i);
}
