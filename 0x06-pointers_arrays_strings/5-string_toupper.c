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
	int n;

	for (i = 0; s[n] != '\0'; n++)
	{
		if (s[n] >= 'a' && s[n] <= 'z')
			s[n] = s[n] - 32;
	}

	return (s);
}
