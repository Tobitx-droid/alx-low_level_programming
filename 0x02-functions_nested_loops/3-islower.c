#include "main.h"

/**
 * main - Major program
 * Checks if a character is of lowercase
 * return (0) for success
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
