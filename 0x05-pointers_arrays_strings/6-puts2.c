#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: the string to be printed
 * Retutn: void
 */

void puts2(char *str)
{
	int n;
	int a = 0;

	while (str[a] != '\0')
	{
		a++;
	}

	for (n = 0; n < a; n += 2)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
