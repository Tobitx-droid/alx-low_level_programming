#include "main.h"

/**
 * largest_number - The description is below
 * Description: returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int d, int e, int f)
{
	int largest;

	if (d > e && e > f)
	{
		largest = d;
	}
	else if (e > d && d > f)
	{
		largest = e;
	}
	else if (f > e)
	{
		largest = f;
	}
	else
	{
		largest = e;
	}

	return (largest);
}
