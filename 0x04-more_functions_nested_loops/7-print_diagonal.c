#include "main.h"
#include <stdio.h>

/**
 * print_diognal -  function that draws a diagonal line on the terminal
 * @n: number of times \ character to be printed
 */

void print_diognal(int n)
{
	int postn, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{

		for (postn = 1; postn <= n; postn++)
		{
			for (space = 1; space <= n; space++)

				_putchar(' ');

			_putchar(92);
			_putchar('\n');
		}
	}
}


