#include <stdio.h>
/**
 * main - The alphabet without q and e
 *
 * Return: zero
 */
int main(void)
{
	char c;

	char c = 'a';
	
	for (c != 'q' && c != 'e'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
