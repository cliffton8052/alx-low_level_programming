#include "main.h"

/**
 * *create_array - creates an array of chars,to be
 * initialised with a special character
 * @size: size of the array
 * @c: the character to initialize
 * Return: pointer to array initialised return NULL
 */

char *create_array(unsigned int size, char c)
{
	char *s = malloc(size);

	if (size == 0 || s == 0)
		return (0);

	while (size--)
		s[size] = c;

	return (s);
}
