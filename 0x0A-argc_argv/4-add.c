#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: the number of commandline arguments
 * @argv: array of pointers to commandline arguments
 *
 * Description: multiplies two numbers
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);
		sum = sum + atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
