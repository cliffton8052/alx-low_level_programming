#include "main.h"

/**
 * print_diagonal - function printing diagonal line
 * @n:mnumber of times character \ to be printed
 * Return: void
 */

void print_diognal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int k, j;

		for (k = 0; k < n; k++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == k)
					_putchar('\\');
				else if (j < k)
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}


