#include <stdio.h>
/**
 * main - Entry point
 * Description: print a quote using write function write function 
 * Return: 1 (fail)
 */

int main(void)
{
char wycliff[]= "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

write(1,wycliff,30);
return(1);
}
