#include "main.h"

/**
 * leet - encodes a string in 1337
 * @s: string to be encoded
 *
 * Return: the resulting string;
 */
char *leet(char *s)
{
	int m, k;

	char *p = "aAeEoOtTlL";
	char *q = "4433007711";

	for (m = 0; s[m] != '\0'; m++)
	{
		for (k = 0; k < 10; k++)
		{
			if (s[m] == p[k])
			{
				s[m] = q[k];
			}
		}
	}

	return (s);
}
