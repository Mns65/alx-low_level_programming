#include <stdio.h>
#include "main.h"
/**
 * main - prints arguments
 *@argc: number of args
 *@argv: Strings
 *
 * Return: Always 0.
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	if (argc > 1)
		printf("%d\n", argc - 1);

	return (0);
}
