#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of size size
 *@size: The size of the array
 *@c: The name
 *
 * Return: NULL if 0 or a pointer to array
 */

char *create_array(unsigned int size, char c)
{
	int i;

	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		return (c[i]);
}
