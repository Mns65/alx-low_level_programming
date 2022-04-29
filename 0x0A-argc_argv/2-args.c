#include <stdio.h>
#include "main.h"
/**
 * main - Prints the argument it recieves
 *@argc: argument count
 *@argv: vector
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
