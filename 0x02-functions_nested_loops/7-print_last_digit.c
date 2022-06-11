#include "main.h"

/**
 * print_last_digit - The description is below
 * Description: prints the last number
 * @n: integer input value
 * Return: Always 0 for success
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		last_digit = -1 * (n % 10);
	else
		last_digit = n % 10;

	_putchar('0' + last_digit);
	return (last_digit);
}
