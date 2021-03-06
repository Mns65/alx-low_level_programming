#include "main.h"

/**
 * strcat - Concatenates a string
 * @dest: destination string
 * @src: source string
 *
 * Return: Returns the destination
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
	{
		dest_len++;
	}

	for (index = 0; src[index]; index++)
	{
		dest[dest_len++] = src[index];
	}

	return (dest);
}
