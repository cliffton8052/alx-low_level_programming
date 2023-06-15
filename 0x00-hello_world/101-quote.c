#include <stdio.h>
/**
 * main - Entry point
 * Description: This is the write function that is
 *  is used to print chars
 *  Return: 1 (fail)
 */
int main(void)
{
char wyc[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, wyc, 30);
return (1);
}
