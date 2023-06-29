#include "main.h"

/**
 * _strcat - a function tha concatenates two
 * string in the program
 * @dest: a pointer to destn input.
 * @src: pointer to source input
 * Return: pointer to resulting string at dest
 */

char *_strcat(char *dest, char *src)
{

	int c, c2;

	c = 0;

	while (dest[c])
		c++;

	for (c2 = 0; src[c2] ; c2++)
		dest[c++] = src[c2];

	return (dest);

}
