#include "main.h"
/**
 * puts2 - Puts a number character.
 *@str: The number.
 *
 */

void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		if ((i % 2) = 0)
		{
		_putchar(str[i]);
		}
		
		i++;
	}
}
