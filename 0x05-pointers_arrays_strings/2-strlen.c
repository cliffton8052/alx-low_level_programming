#include <stdio.h>
#include "main.h"

/**
 * _strlen - function for returning length of a string
 * @str: string type to get the length for
 * Return: the length of string to get
 */

size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++){
		length++;
	}
	return (length);
}
