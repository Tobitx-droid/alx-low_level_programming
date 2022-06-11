#include "main.h"

/**
 * _islower - The description is below
 * Description: This function checks for lowercase character
 * @n: integer input value
 * Return: Always return 0
 */

int _islower(int c)
{
	int i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
			lower = 1;
	}
	return (lower);
}
