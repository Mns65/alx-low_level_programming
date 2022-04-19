#include "main.h"
/**
 * rev_string - Reverses a string
 *@s: The string to be reversed
 *
 */

void rev_string(char *s)
{
	int i;

	for (i = _strlen(s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
