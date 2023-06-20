#include "main.h"

/**
 * main - check code
 * Description: print alphabet in lower case
 * @void - parameter
 * Return: Always 0
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);

	_putchar('\n');

}
