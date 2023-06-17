#include <stdio.h>

/**
 * main - Entry point
 * Description - 7-print_tebahpla.c
 * Return: 0 (Success)
 *
 */

int main(void)
{
	char me = 'z';

	while (me >= 'a')
	{
		putchar(me);
		me--;
	}
	putchar('\n');
	return (0);
}
