#include "main.h"

/**
 * print_number - prints an integer
 * @n: an integer to be printed
 * Return: void
 */

void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		n *= -1;
		i = n;
		_putchar('_');
	}

	i /= 10;
	if (i != 0)

	print_number(i);
	_putchar((unsigned int) n % 10 + 48);

}

