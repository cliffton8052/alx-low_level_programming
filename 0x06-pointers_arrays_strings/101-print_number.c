#include "main.h"

/**
 * print_number - print number of characters
 * @n: integer parameters
 * Return: 0 (success)
 */

void print_number(int n)
{
	unsigned int n1;

	n1 = n;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}

	if (n1 / 10 != 0)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');

}
/**
*101-print_number.c: In function ‘print_number’:
*101-print_number.c:25:26: error: expected ‘)’ before ‘;’ token
*  25 |  _putchar((n1 % 10 + '0');
*     |                          ^
*      |                          )
*101-print_number.c:25:27: error: expected ‘;’ before ‘}’ token
*  25 |  _putchar((n1 % 10 + '0');
*      |                           ^
*     |                           ;
*   26 | }
*
*      | ~
*/
