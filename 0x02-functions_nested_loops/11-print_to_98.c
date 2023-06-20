#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @w: number to start the print
 * Return: 0 (Success)
 */

void print_to_98(int w)

{
if (w <= 98)
{
for (; w <= 98; w++)
{
if (w == 98)
{
printf("%d", w);
printf('\n');
break;
}
else
{
print("%d, ", w);

}
}
}
else
{
for (; w >= 98; w--)
{
if (w == 98)
{
printf("%d", w);
printf('\n');
break;
}
else
{
printf("%d, ", w);
}
}
}
}
