#include "main.h"
/**
 * print_alphabet_x10  - function that prints 10 times the alphabet.
 * Return: void
 *
 */

void print_alphabet_x10(void)
{
char j;
int k;
k = 0;

while (k < 10)
{
for (j = 'a'; j <= 'z'; j++)
{
_putchar(j);
}
_putchar('\n');
k++;
}
}
