#include "main.h"

/**
 *  more_numbers - print numbers
 *  Return: void
 */

void more_numbers(void)
{
	int k, i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			k = j;

			if (j > 9)
			{
				_putchar(1 + 48);
				k = j % 10;
			}
			_putchar(k + 0);
		}
		_putchar('\n');
	}
}
