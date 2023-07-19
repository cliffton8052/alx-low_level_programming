#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - check code for students
 * @argc: the number of arguments
 * @argv: the argument vector
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		return (99);
	}

	op_func = get_op_func(argv[2]);
	if (op_func == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	printf("%d\n", op_func(num1, num2));

	return (0);
}

