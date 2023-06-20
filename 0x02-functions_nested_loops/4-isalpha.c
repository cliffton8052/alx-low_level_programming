#include "main.h"

/**
 * main - entry point
 * Description: _isalpha used for checking alphabetic character
 * @m: This is the character to be checked
 * Return: 1 for alphabetic character or 0 for everything else
 *
 */

int _isalpha(int m)
{
	if ((m >= 65 && m <= 97) || (m >= 97 && m <= 122))
	{
		return (1);
	}
	return (0);
}

