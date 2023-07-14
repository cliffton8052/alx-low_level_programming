#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * validateInput - validates ints to be multiplied
 * @num: num to be validated
 * Return: 1
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
 * mul - multipliees two ints
 * @num1: int
 * @num2: int
 * Return: 0
 */

void mul(char *num1, char *num2)
{
	int start = 0;
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int result[200] = {0};
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
		char zero = '0';

		putchar(zero);
		putchar('\n');
	}
	else
	{
		for (i = start; i < len1 + len2; i++)
		{
			char digit = result[i] + '0';

			putchar(digit);
		}
		putchar('\n');
	}
}

/**
 * main - entry point
 * @argc: int
 * @argv: list
 * Return: results
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		fputs("Error: Invalid number of arguments.\n", stderr);
		return (98);
	}

	int valid_num1;
	int valid_num2;
	char *num1;
        char *num2;

	num1 = argv[1];
	num2 = argv[2];
       	
	valid_num1 = validateInput(num1);
	valid_num2 = validateInput(num2);

	if (!valid_num1 || !valid_num2)
	{
		fputs("Error: Invalid input numbers.\n", stderr);
		return (98);
	}
	mul(num1, num2);
	return (0);
}

