#include "main.h"

/**
 * print_diagonal - The description is below
 * Description: Prints a diagonal line for a given input
 * @n: Integer input
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int k = 0, m;

	if (n > 0)
	{
		for (; k < n; k++)
		{
			for (m = 0; m < k; m++)
				_putchar(' ');
		_putchar(92);
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
