#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str: char array string type
 * Description: if number odd for character print (length - 1) / 2
 * Return: chars
 */

void puts_half(char *str)
{
	int k;

	for (k = 0; str[k] != '\0'; k++)
		k++;

	for (k /= 2; str[k] != '\0'; k++)
	{
		putchar(str[k]);
	}
	_putchar('\n');
}
