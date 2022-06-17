#include "main.h"

/**
 * print_number - The description is below
 * Description: Prints any number it is given using only _putchar
 * @n: Integer input
 * Return: Nothing
 */

void print_number(int n)
{
	      unsigned a = n;

      	if (n < 0)
	      {
	            	_putchar('-');
		             a = -a;
      	}
      	if ((a / 10) > 0)
	            	print_number(a / 10);
      	_putchar('0' + a % 10);
}
