#include "main.h"

/**
 * string_toupper - The description is below
 * Description: changes all lowercase letters of a string
 * to uppercase
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *string_toupper(char *s)
{
	char *g = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (g);
}
