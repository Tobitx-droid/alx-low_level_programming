#include "main.h"

/**
 * *_strcpy - The description is below
 * copies the string pointed to by src
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
      	int total, i;

      	total = 0;

      	while (src[total] != '\0')
	      {
		            total++;
      	}

	      for (i = 0; i < total; i++)
	      {
	            	dest[i] = src[i];
	      }
	      dest[i] = '\0';

	      return (dest);
}
