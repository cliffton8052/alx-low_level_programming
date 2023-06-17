#include <stdio.h>

/**
 * main - Entry point of the program
 * Description - 8-print_base16.c
 * Return: 0 (Pass)
 *
 */

int main(void)
{
	int number = 48;

	while (number <= 102)
	{
		putchar(number);

		if (number == 57)
			number += 39;
		number++;
	}
	putchar('\n');
	return (0);
}
