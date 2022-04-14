#include "main.h"

/**
 * _isdigit - Checks if an input is a digit
 *@c: argument
 *
 * Return: returns 1 if digit
 * 0 if NOT
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
