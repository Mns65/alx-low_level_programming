#include "main.h"

/**
 * print_most_numbers - Prints numbers without 2 and 4.
 *
 */

void print_most_numbers(void)
{
	int c;

	c = '0';

	for ((c != '2' && c != '4'); c <= 9; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
