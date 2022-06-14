#include "main.h"

/**
 * _puts - The description is below
 * Description: Takes a string literal and prints it
 * @str: String input
 * Return: Nothing
 */

void _puts(char *str)
{
	      int v;

	      v = 0;
	      while (str[v] != '\0')
	      {
		            _putchar(str[v]);
		            v++;
	      }
	      _putchar('\n');
}
