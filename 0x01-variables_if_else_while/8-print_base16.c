#include <stdio.h>
/**
 * main - Prints base 16 numbers
 *
 * Return: zero
 */
int main(void)
{
	int n;

	char c;

	for (n = 0; n <= 9; n++)
	{
		putchar(n);
	}
	for (c = '\0'; c <= '_'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}