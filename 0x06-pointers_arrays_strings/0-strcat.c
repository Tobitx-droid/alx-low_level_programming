#include "main.h"

/**
 * _strcat - The description is below
 * Description: concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int var, i;

	for (var = 0; dest[var] != '\0'; var++)
		;

	i = 0;
	while (*(src + i))
	{
		*(dest + var + i) = *(src + i);
		i++;
	}

	*(dest + var + i) = '\0';

	return (dest);
}
