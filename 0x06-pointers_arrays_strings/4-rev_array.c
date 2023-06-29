#include "main.h"

/**
 * reverse_array - reverses the content of the array
 * @a: array of integers
 * @n: the number of element to swap
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j, k;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		k = a[i];
		a[i] = a[j];
		a[j] = k;
	}
}
