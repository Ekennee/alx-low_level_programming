#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int i, p;

	for ( p = n - 1; p >= n / 2; p--)
	{
		i = a[n - 1 - p];
		a[n - 1 - p] = a[p];
		a[p] = i;
	}
}
