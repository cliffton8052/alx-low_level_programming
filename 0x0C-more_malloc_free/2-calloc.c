#include "main.h"
/**
 * *_memset - fills memory with a constant byte
 * @s: pointer to store the consant
 * @b: constant
 * @n: max bytes to use
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *num = s;

	while (n--)
		*s++ = b;
	return (num);
}

/**
 * *_calloc - allocates memory for an array using malloc
 * @nmemb: memory length
 * @size: size of each element
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);

	m = malloc(sizeof(int) * nmemb);

	if (m == 0)
		return (NULL);

	_memset(m, 0, sizeof(int) * nmemb);

	return (m);
}

