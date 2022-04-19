#include "main.h"

/**
 * print_rev - Prints the reverse of a string.
 *@s: The string to be reversed
 *
 */

void print_rev(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
