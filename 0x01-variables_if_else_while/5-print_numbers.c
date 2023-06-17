#include <stdio.h>

/**
 * main - Entry point
 * Description - 5-print_numbers.c
 * Return: 0 (Successful)
 */

int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		printf("%i", number);
		number++;
	}
	printf("\n");
	return (0);
}
