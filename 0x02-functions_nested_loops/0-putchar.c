#include <unistd.h>
#include "main.h"

/**
 * main - Major program
 *Prints out text
 *return 0 for success
 */

int main(void)
{
	char s[15] = "_putchar";
	int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	_putchar('\n');

	return (0);
}
