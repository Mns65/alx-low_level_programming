#include "main.h"

/**
 * more_numbers - Prints 10 times a list
 *
 */

void more_numbers(void)
{
	int c;

	int n;

	for (n = 0; n < 10; n++)
	{
		for (c = '0'; c <= '14'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
