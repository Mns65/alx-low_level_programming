#include "main.h"

/**
 * _isupper - Tells if a letter is UPPER
 *@c: Arguments
 * Return: 1 if c is upper
 * Returns 0 otherwise
 */

int _isupper(int c);
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
