#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"
/**
 * validateInput - validates the ints input
 * @num: pointer to result
 *
 * Return: 1 on non-integer and 0 on integer
 */

int validateInput(char *num)
{
	while (*num)
	{
		if (!isdigit(*num))
		{
			return (0);
		}
		num++;
	}
	return (1);
}

/**
 * mul - multiplies two integers
 * @num1: int
 * @num2: int
 * Return: NULL on error or 1 upon success
 */

void mul(char *num1, char *num2)
{
	int start = 0;
	int result[200] = {0};
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int i, j, carry, product;

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			product = (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1] + carry;
			result[i + j + 1] = product % 10;
			carry = product / 10;
		}
		result[i] += carry;
	}

	while (result[start] == 0 && start < len1 + len2 - 1)
	{
		start++;
	}

	if (start == len1 + len2 - 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = start; i < len1 + len2; i++)
		{
			printf("%d", result[i]);
		}
		printf("\n");
	}
}
/**
 * main - writes arguments
 * @argc: int
 * @argv: argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *num1, *num2;
	int valid_num1, valid_num2;

	if (argc != 3)
	{
		printf("Error: Invalid number of arguments.\n");
		exit(98);
	}

	num1 = argv[1];
	num2 = argv[2];

	valid_num1 = validateInput(num1);
	valid_num2 = validateInput(num2);

	if (!valid_num1 || !valid_num2)
	{
		printf("Error: Invalid input numbers.\n");
		exit(98);
	}

	mul(num1, num2);
	return (0);
}

