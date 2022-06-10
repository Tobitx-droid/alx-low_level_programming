#include "main.h"

/**
 * main - Major programme
 * prints the last number
 * returns 0 for success
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
