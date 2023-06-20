#include "main.h"

/**
 * main - entry point of program
 * @k: the character to be checked
 * Return: 1 for lowercase and 0 for anything else
 */

int _islower(int k)

{
	if (k >= 97 && k <= 122)
	{

	return (1);
	}
	return (0);

}
