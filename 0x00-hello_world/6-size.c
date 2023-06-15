#include <stdio.h>
/**
 * main -  C program that prints the size of various types and sizes.
 * Return 0 (Pass)
 */

int main(void)
{
char c;
int i;
long int x;
long long int z;
float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(x));
printf("Size of a long long: %lu byte(s)\n", (unsigned long)sizeof(z));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
