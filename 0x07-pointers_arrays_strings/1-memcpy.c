#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: memory area
 * @src: source area
 * @n: length of src to be copied
 * Return: pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; itr < n; itr++)
	{
		dest[itr] = src[itr];
	}
	return (dest);
}
