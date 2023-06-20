#include "main.h"

/**
 * main - Enrtry point
 * Description: print alphabet in lower case
 * Return: 0 (void)
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);

	_putchar('\n');
}
