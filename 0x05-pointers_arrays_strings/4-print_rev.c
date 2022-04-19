#include "main.h"

/**
 * print_rev - Prints the reverse of a string.
 *@s: The string to be reversed
 *
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i--;
		_putchar(s[i]);
	}
	_putchar('\n');
}
