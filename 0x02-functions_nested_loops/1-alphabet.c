#include "main.h"

/**
 * print_alphabet - Prints the alphabet in small letters
 *
 * Return: the value
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
