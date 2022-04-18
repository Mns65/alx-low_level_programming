#include "main.h"

/**
 * _strlen - A function that counts a string length
 *@s: The string entered
 *
 * Return: The length count
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		
		i++;
	}
	return (i);

}
