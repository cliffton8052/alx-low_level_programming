#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - program entry point
 * Description - The last digit
 * Return: 0 (Success)
 */

int main(void)
{
	int n, z;

	srand(time(NULL));
	n = rand() % 201 - 100;
	z = n % 10;

	printf("Last digit of %d is %d and is ", n, z);
	if (z > 5)
		printf("greater than 5/n");
	else if (z == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0\n");
	return (0);
}
