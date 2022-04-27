#include "main.h"

/**
 * _puts_recursion - Puts a character recursively
 *@s: The string
 *
 */

void _puts_recursion(char *s)
{
	int i;
	
	while (s[i] != '\0')
	{
		_putchar(s[i]);
			i++;
	}
}
