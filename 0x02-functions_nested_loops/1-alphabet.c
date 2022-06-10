#include "main.h"

/**
 * print_alphabet - Major program
 * Description: Prints the alphabets in order
 * Return: Nothing
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
