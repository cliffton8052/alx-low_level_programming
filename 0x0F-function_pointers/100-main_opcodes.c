#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	char *main_function_ptr = (char *)main;

	for (int i = 0; i < num_bytes; i++)
	{
		printf("%02hhx", main_function_ptr[i]);
	}

	printf("\n");

	return (0);
}
/**
 * {
 * char *p = (char *) main;
 * int b;
 * if (argc != 2)
 * printf("Error\n"), exit(1);
 * b = atoi(argv[1]);
 * if (b < 0)
 * printf("Error\n"), exit(2);
 * while (b--)
 * printf("%02hhx%s", *p++, b ? " " : "\n");
 * return (0);
 * }

