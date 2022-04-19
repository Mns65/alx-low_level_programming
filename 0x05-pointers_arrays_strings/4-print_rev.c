#include "main.h"

/**
 * print_rev - Prints the reverse of a string.
 *@s: The string to be reversed
 *
 */

void print_rev(char *s)
{
	int i;

	for (s[i] = 0; s[i] <= '\0'; i--)
	{

		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
