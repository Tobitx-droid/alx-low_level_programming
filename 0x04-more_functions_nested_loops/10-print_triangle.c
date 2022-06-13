#include "main.h"

/**
 * print_triangle - The description is below
 * Description: prints a triangle, followed by a new line
 * @size: size of the triangle
 * Return: Nothing
 */
void print_triangle(int size)
{
      	if (size <= 0)
      	{
            		_putchar('\n');
      	} else
      	{
	            	int k, m;

		            for (k = 1; k <= size; k++)
		            {
		                   	for (m = k; m < size; m++)
		                  	{
			                        	_putchar(' ');
		                  	}

		                   	for (m = 1; m <= k; m++)
		                  	{
			                        	_putchar('#');
	                  		}

	                  		_putchar('\n');
	             	}
       	}
}
