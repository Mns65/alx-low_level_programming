#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates s1 and s2
 *@s1: The base string
 *@s2: The string to be added
 *
 * Return: if NULL empty string else Concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, cat = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	concat = malloc(len * sizeof(char));

	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat[cat++] = s1[i];

	for (i = 0; s2[i]; i++)
		concat[cat++] = s2[i];

	return (concat);

}
