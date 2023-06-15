#include <stdio.h>
/**
 * main - Entry point
 * Description: print a quote using write function.
 * Return: 1 (error).
 */
int main(void)
{
char wyc[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, wyc, 30);
return (1);
}
