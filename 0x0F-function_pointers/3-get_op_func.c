#include "3-calc.h"

/**
 * get_op_func - Selects the correct function to perform ops
 * @s: The operator passed as an argument to the program.
 *
 * Return: A pointer to the function that corresponds to 
 *         the operator given as a parameter.
 *         If s does not match any of the 5 expected 
 *         operators (+, -, *, /, %), return NULL.
 */
int (*get_op_func(char *s))(int, int)
{
	op_func_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*s == *(ops[i].op) && *(s + 1) == '\0')
			return ops[i].func;
		i++;
	}

	return NULL;
}

