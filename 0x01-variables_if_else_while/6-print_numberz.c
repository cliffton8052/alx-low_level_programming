#include <stdio.h>

/**
 * main - programs entry point
 * Description - 6-print_numberz.c
 * Return: 0 (Pass)
 */

int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		putchar(number + '0');
		number++;
	}
	putchar('\n');

	return (0);
}
