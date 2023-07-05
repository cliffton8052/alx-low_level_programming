#include "main.h"

/**
 * _isdigit - check if numbers are 0-9
 * @c: character that checks digit from 0-9
 * Return: 0 on error or 1 for success
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
