#include "main.h"

/**
 * puts2 - The description is below
 * Description - prints one char out of 2 of a string
 * followed by a new line
 * @str: string to print the chars from
 * Return: Nothing
 */

void puts2(char *str)
{
	      int total, i;

      	total = 0;

      	while (str[total] != '\0')
      	{
            		total++;
      	}

      	for (i = 0; i < total; i += 2)
      	{
            		_putchar(str[i]);
      	}

      	_putchar('\n');
}
