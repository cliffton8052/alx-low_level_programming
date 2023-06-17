#include <stdio.h>

/**
 * main - programs Entry point
 * Description - 4-print_alphabt.c
 * Return: 0 (Success)
 */

int main(void)
{
	char al = 'a';

	while (al <= 'z')
	{
		if (al == 'e' || al == 'q')
			al++;
		putchar(al);
		al++;
	}
	putchar('\n');
	return (0);
}
