#include "main.h"

/**
 * print_rev - The description is below
 * Description: Prints a string in reverse
 * @s: String input
 * Return: Nothing
 */

void print_rev(char *s)
{
	      int i;
	      int total;

	      for (total = 0; s[total] != '\0'; total++);
			 i = total - 1;
	      while (i >= 0)
	      {
	            	_putchar(s[i]);
	            	i--;
      	}
      	_putchar('\n');
}
