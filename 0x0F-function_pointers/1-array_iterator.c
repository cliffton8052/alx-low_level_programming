#include "function_pointers.h"

/**
 * array_iterator - Executes a given function on each element.
 * @array: Pointer to the array of integers.
 * @size: The size of the array.
 * @action: A function pointer to the function
 *
 * This function iterates over the elements of the array
 * action function to each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
	{
		action(*array++);
	}
}
