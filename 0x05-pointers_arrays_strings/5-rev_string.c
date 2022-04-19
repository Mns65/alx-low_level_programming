#include "main.h"
/**
 * rev_string - Reverses a string
 *@s: The string to be reversed
 *
 */

void rev_string(char *s)
{
	int i = 0;

	for (s[i] = '\0'; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
