#include "main.h"
#include <stdio.h>

/**
 *  more_numbers - print numbers
 *  Return: void
 */

void more_numbers(void)
{
	int k, j;

	for (k = 0; k <= 10; k++)
	{
		for (j = 0; j <= 14; j++)
		{

			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
