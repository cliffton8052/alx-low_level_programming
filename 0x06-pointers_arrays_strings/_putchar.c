#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to be printed
 * Return: 1 (success) and -1 on error returned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
