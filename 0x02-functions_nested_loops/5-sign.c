#include "main.h"

/**
 * print_sign - The description is below
 * Description: Prints the sign of a number
 * @n: integer input value
 * Return: Always return 0 for success
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
