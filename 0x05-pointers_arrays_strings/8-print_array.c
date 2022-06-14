#include <stdio.h>
#include "main.h"

/**
 * print_array - The description is below
 * Description - prints n elements of an array of integers
 * followed by a new line
 * @a: array to be printed
 * @n: number of elements to print
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	      int k;

	      for (k = 0; k < n; k++)
	      {
	            	if (k == 0)
		                  	printf("%d", a[k]);
		            else
		                   	printf(", %d", a[k]);
	}
		            printf("\n");
}
