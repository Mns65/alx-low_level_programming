#include "main.h"

/**
 * _puts_recursion - Puts a character recursively
 *@s: The string
 *
 */

void _puts_recursion(char *s)
{
	int i = 0;
	
	if (s[i] != '\0')
	{
		_puts_recursion(s[i]);
			i++;
	}
}
