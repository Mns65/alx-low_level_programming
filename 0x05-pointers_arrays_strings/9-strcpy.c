#include "main.h"
/**
 * _strcpy - Copies a string to another
 *@dest: the first string
 *@src: the second string
 *
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while ((dest[i] = src[i]) != '\0')
	{
		i++;
	}
	return (*dest[i]);

}
