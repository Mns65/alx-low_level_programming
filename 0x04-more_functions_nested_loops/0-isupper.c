#include "main.h"

/**
 * _isupper - Tells if a letter is UPPER
 *@c: arguments 
 * Return: 1 if c is upper
 */

int _isupper(int c)
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
