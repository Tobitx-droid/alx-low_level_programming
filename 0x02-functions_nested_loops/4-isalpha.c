#include "main.h"

/**
 * _isalpha - The description is below
 * Description: Checks for upper and lower case
 * @c: integer input value
 * Return: Always 0 for success
 */

int _isalpha(int c)
{
	int i;
	int alpha = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
			alpha = 1;
	}


	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
			alpha = 1;
	}
	return (alpha);
}
