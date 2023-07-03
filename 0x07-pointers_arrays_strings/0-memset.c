#include "main.h"

/**
 * *_memset - a function that fills memory with a constant byte.
 * @s: pointer to store the constant
 * @b: constant
 * @n: maximum bytes to be used
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; n > 0; itr++, n--)
	{
		s[itr] = b;
	}

	return (s);
}
