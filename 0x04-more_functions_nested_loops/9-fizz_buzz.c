#include "main.h"

/**
 *
 * main - entry point that prints number 1 to 100
 * but for multiple of three - fizz
 * multiple of five - buzz
 * Return: 0 (PASS)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i %b3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (i == 1)
		{
			printf("%d", i);
		}
	}
	printf('\n');

	return (0);
}

