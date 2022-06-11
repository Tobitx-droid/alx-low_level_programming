#include "main.h"

/**
 * _abs - The description is below
 * Description: Finds absolute value of numbers
 * @i: integer input value
 * Return: Always 0 for success
 */

int _abs(int i)
{
	int abs;

	if (i < 0)
		abs = (i + (-2 * i));
	else if (i >= 0)
		abs = i;

	return (abs);
}
