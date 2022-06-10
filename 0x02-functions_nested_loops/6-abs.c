#include "main.h"

/**
 * main - Major program
 * finds absolute value of numbers
 * return 0 for success
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
