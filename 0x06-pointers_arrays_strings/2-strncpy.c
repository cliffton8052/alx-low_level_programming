#include "main.h"

/**
 * _strncpy - a function that copies two or more strings
 * @dest: points to destination input
 * @src: points to source input of program
 * @n: numder byte of src
 * Return: destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (desrt);
}
