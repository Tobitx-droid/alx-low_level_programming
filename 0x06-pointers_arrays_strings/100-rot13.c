#include "main.h"

/**
 * rot13 - The description is below
 * Description: encodes a string in rot13
 * @s: string to be encoded
 *
 * Return: the resulting string
 */
char *rot13(char *s)
{
	int m, n;

	char p[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char q[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (m = 0; s[m] != '\0'; m++)
	{
		for (n = 0; p[n] != '\0'; n++)
		{
			if (s[m] == p[n])
			{
				s[m] = q[n];
				break;
			}
		}
	}

	return (s);
}
