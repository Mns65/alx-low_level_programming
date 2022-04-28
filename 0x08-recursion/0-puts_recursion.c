#include "main.h"

/**
 * _puts_recursion - Puts a character recursively
 *@s: The string
 *
 */

void _puts_recursion(char *s)
{

	
	if (*s)
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
}
