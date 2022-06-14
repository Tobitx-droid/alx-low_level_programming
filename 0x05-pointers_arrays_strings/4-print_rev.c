#include "main.h"

/**
 * print_rev - The description is below
 * Description: Prints a string in reverse
 * @s: String input
 * Return: Nothing
 */

void print_rev(char *s)
{
	     int i, k, total;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	total = i;

	for (k = total - 1; k >= 0; k--)
	{
		_putchar(s[k]);
	}

	_putchar('\n');
}
