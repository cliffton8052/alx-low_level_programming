#include "main.h"

/**
 *  more_numbers - print numbers
 *  @k: external loop
 *  @j: internal loop
 *  Return: void
 */

void more_numbers(void)
{
	int k, j;

	for (k = 1; k <= 10; k++)
	{
		if (j >= 10)
			_putchar('1');

		else
			_putchar(j % 10 + '0');

	}
	_putchar('\n');
}
