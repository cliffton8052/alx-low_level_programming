#include <stdio.h>

/**
 * main - Progams entry point
 * Description - 9-print_comb
 * Return: 0 (PASS)
 *
 */

int main(void)
{
	int increment = 0;

	while (increment <= 9)
	{
		putchar(increment + 48);

		if (increment != 9)
		{
			putchar(',');
			putchar(' ');
		}
		increment++;
	}
	putchar('\n');
	return (0);
}
