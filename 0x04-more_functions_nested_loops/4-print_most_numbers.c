#include "main.h"

/**
 * print_most_numbers - Prints numbers without 2 and 4.
 *
 */

void print_most_numbers(void)
{
	int n;

	n = '0';

	for (n != '2' && n != '4'; n <= 9; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
