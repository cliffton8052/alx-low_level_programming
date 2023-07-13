#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: number of bytes of s2
 * Return: point to a newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t s1_len, s2_len, concat_len;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s1_len = strlen(s1);
	s2_len = strlen(s2);
	concat_len = s1_len + (n >= s2_len ? s2_len : n);
	ptr = (char *)malloc((concat_len + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	strncpy(ptr, s1, s1_len);
	strncpy(ptr + s1_len, s2, (n >= s2_len ? s2_len : n));
	ptr[concat_len] = '\0';
	return (ptr);
}

