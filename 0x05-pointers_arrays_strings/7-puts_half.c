#include "main.h"

/**
 * puts_half - The description is below
 * Description - followed by a new line
 * @str: string to be printed
 * Return: Nothing
 */

void puts_half(char *str)
{
	      int total, t, i;

	      total = 0;

      	while (str[total] != '\0')
      	{
            		total++;
      	}

      	if (total % 2 == 0)
      	{
            		for (i = total / 2; str[i] != '\0'; i++)
	            	{
	                  		_putchar(str[i]);
            		}
      	} else if (total % 2)
      	{
	            	for (t = (total - 1) / 2; t < total - 1; t++)
		            {
		                  	_putchar(str[t + 1]);
	            	}
       	}
      	_putchar('\n');
}
