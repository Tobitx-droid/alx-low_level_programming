#include <stdio.h>
#include <math.h>

/**
 * main - The description is found below
 * Description: finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 for Success
 */
int main(void)
{
	long int m;
	long int biggest;
	long int j;

	m = 612852475143;
	biggest = -1;

	while (m % 2 == 0)
	{
		biggest = 2;
		m /= 2;
	}

	for (j = 3; j <= sqrt(m); j = j + 2)
	{
		while (m % j == 0)
		{
			biggest = j;
			m = m / j;
		}
	}

	if (m > 2)
		biggest = m;

	printf("%ld\n", biggest);

	return (0);
}
