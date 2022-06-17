#include "main.h"

/**
 * reverse_array - The description is below
 * Description: reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int k, g, tmp;

	g = n - 1;

	for (k = 0; k < n / 2; k++)
	{
		tmp = a[k];
		a[k] = a[g];
		a[g--] = tmp;
	}
}
