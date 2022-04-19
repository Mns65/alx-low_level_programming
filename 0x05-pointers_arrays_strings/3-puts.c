#include "main.h"
/**
 * _puts - Puts a string stdout
 *@str: The string
 *
 * Return: Output
 */

void _puts(char *str)
{
	int i = 0;
	
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

}
