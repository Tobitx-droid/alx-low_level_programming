#include "holberton.h"

/**
 * _strncat - The description is below
 * Description: concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
      	int m, n;

      	m = 0;
      	n = 0;

	      while (dest[m] != '\0')
	            	m++;

      	while (src[n] != '\0' && m < n)
      	{
            		dest[m] = src[n];
	             	m++;
	            	n++;
	      }

      	dest[m] = '\0';

      	return (dest);
}
