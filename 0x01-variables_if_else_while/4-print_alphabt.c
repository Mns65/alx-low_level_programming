#include <stdio.h>
/**
 * main - The alphabet without q and e
 *
 * Return: zero
 */
int main(void)
{
	char c;

	
	for (c = 'a'; c <= 'z'; c++)
	{
		while (c != 'q' && c != 'e')
		putchar(c);
	}
	putchar('\n');
	return (0);
}
