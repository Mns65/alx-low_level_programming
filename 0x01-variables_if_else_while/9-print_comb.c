#include <stdio.h>
/**
 * main - Prints numbers with , and SPACE
 *
 * Return: zero
 */
int main(void)
{
	int n, i;

	int k = 44;

	int s = 32;

	for (n = 48; n <= 57; n++)
	{
		for (i =0; i < 9; i++)
		{
			putchar(k);
		}
		putchar(n);
		putchar(s);

	}

	return (0);
}
