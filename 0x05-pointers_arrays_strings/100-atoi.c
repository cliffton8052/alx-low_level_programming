#include "main.h"

/**
 * _atoi - convert a string to an intenger
 * @s: pointer to be converted
 * Return: integer
 */

int _atoi(char *s)
{
	unsigned int ni = 0;
	int num = 1;

	do {
		if (*s == '-')
			num *= -1;
		else if (*s >= '0' && *s <= '9')
				ni = (ni * 10) + (*s - '0');

				else if (ni > 0)
				break;
				} while (*s++);

				return (ni * num);
				}
