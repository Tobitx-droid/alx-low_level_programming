#include "main.h"

/**
 * main - Major program
 * Checks for upper and lower case
 * return 0 for success
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
