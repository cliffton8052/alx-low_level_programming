#include "function_pointers.h"

/**
 * int_index - checks if the array is NULL.
 * @array: A pointer to the array of integers.
 * @size: The number of elements in the array.
 * @cmp: A function pointer to the comparison
 * function with the signature int (*cmp)(int).
 *
 * Return: 0 if NULL -1 if success
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
