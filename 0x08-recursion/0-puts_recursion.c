#include "main.h"

/**
 * _puts_recursion - Puts a character recursively
 *@s: The string
 *
 */

void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(s);
			s++;
	}
}
