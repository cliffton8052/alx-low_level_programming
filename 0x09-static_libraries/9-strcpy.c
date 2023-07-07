#include "main.h"

/**
 * _strcpy - copy a string
 * @dest: destination value
 * @src: source value
 * Return: the pointer dest
 */

char *_strcpy(char *dest, char *src)
{
	int k;

	for (k = 0; src[k] != '\0'; k++)
	{
		dest[k] = src[k];
	}
	dest[k++] = '\0';
	return (dest);
}
