#include "main.h"
#include <stdio.h>
/**
 * main - Prints the number and names of arguments
 *@argc: the count
 *@argv: the vector
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	if (argc > 1)

		printf("%s", argv[0]);
	return (0);
}
