#include "main.h"

/**
 * _isupper -  function that checks for uppercase character.
 * @c: character to be printed out either upper lower
 * Return: 1 on upper and 0 on lower
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
