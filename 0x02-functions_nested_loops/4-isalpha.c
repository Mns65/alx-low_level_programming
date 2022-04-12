#include "main.h"

/**
 * _isalpha - Checks if an argument is an alphabet
 *
 *@c: The argument value
 *
 * Return: returns 1 if it is Alphabet, 0 if NOT
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
