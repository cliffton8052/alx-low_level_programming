#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string to be modified
 * Return: void
 */

void rev_string(char *s)
{
	int l = 0, index = 0;
	char tmp;

	while (s[index++])
	{
		l++;
	}

	for (index = l - 1; index >= l / 2; index--)
	{
		tmp = s[index];
		s[index] = s[l - index - 1];
		s[l - index - 1] = tmp;
	}
}
