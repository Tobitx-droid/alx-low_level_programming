#include "main.h"
#include <stdio.h>

/**
 * main - The description is below
 * Description: This code is for and interview purpose
 * Return: Always 0 for success
 */
int main(void)
{
	      int j = 1;

	      for (; j < 100 ; j++)
	      {
	            	if (j % 3 == 0 && j % 5 == 0)
		                  	printf("FizzBuzz ");
	            	else if (j % 3 == 0)
	                  		printf("Fizz ");
	            	else if (j % 5 == 0)
	                  		printf("Buzz ");
	             	else
	                  		printf("%d ", j);
      	}
      	printf("Buzz\n");

      	return (0);
}
