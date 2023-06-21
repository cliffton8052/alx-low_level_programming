#include "main.h"

/**
 * main - Entry point of program
 * Description: computes the sum and multiples
 * of three and 5
 * Return: 0 (SUCCESS)
 */

int main(void)
{
	int sum, num;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum += num;
	}
	printf("%d\n", sum);

	return (0);
}
