#include "main.h"

/**
 * print_sign - Prints + if positive, - if negative
 *@n: an argument
 *
 * Return: returns 1 if > 0, 0 if 0 and -1 if < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n = 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
