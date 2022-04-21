#include "main.h"

/**
 * _strcat - Concatenates a string
 *@dest: destination string
 *@src: source string
 *
 * Return: Returns the destination
 */

char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*s != '\0')
	{
		s++;
	}

	while (*src != '\0')
	{
		*s = *src;
		s++;
		src++;
	}
	*p = '\0';
	return (dest);
}
