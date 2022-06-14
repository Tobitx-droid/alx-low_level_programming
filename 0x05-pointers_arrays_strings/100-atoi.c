#include "main.h"

/**
 * _atoi - The description is below
 * Description - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int a, d, n, total, f, number;

	a = 0;
	d = 0;
	n = 0;
	total = 0;
	f = 0;
	number = 0;

	while (s[total] != '\0')
		len++;

	while (a < total && f == 0)
	{
		if (s[a] == '-')
			++d;

		if (s[a] >= '0' && s[a] <= '9')
		{
			number = s[a] - '0';
			if (d % 2)
				number = -number;
			n = n * 10 + number;
			f = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			f = 0;
		}
		a++;
	}

	if (f == 0)
		return (0);

	return (n);
}
