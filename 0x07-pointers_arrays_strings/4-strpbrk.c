#include "main.h"

/**
 * *_strpbrk - searces for a string for any of set bytes
 * @s: string
 * @accept: the string to match
 * Return: pointer to s byte that matches accept byte
 */

char *_strpbrk(char *s, char *accept)
{
	int itr, jtr;
	char *p;

	itr = 0;
	while (s[itr] != '\0')
	{
		jtr = 0;
		while (accept[jtr] != '\0')
		{
			if (accept[jtr] == s[itr])
			{
				p = &s[itr];
				return (p);
			}
			jtr++;
		}
		itr++;
	}
	return (0);
}
