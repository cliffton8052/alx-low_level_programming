#include <stdio.h>
/**
 * main - Entry point
 * Description: C programming that prints size of bytes
 * Return 0 (Pass)
 */
int main(void)
{
	char c;
	int i;
	long int x;
	long long int z;
	float f;
printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(char));
printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(int));
printf("Size of long int: %lu byte(s)\n" (unsigned long)sizeof(long int));
printf("Size of long long int: %lu byte(s)\n" (unsigned long)sizeof(long long int));
printf("Size of float %lu byte(s)\n" (unsigned long)sizeof(float));
return (0);
}
