#include "main.h"
/**
 * rev_string - Reverses a string
 *@s: The string to be reversed
 *
 */

void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i--;
	}
}
