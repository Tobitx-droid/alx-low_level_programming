#include "main.h"

/**
 * rev_string - The description is below
 * Description: reverses a string
 * @s: string to be reversed
 * Return: Nothing
 */
void rev_string(char *s)
{
	      char tmp;
	      int i, total, total1;

	      total = 0;
	      total1 = 0;

      	while (s[total] != '\0')
      	{
             		total++;
      	}

      	total1 = total - 1;

	      for (i = 0; i < total / 2; i++)
	      {
	            	tmp = s[i];
	            	s[i] = s[total1];
	            	s[total1--] = tmp;
      	}
}
