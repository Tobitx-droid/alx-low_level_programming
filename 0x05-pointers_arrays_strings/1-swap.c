#include "holberton.h"

/**
 * swap_int - The description is below
 * Description - swaps the values of two integers
 * @a: pointer to first value
 * @b: pointer to second value
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
        int c;

        c = *a;
        *a = *b;
        *b = c;
}
