#include <stdio.h>
#include <stdlib.h>
/**
 * main - Multiplies two arguments
 *@argc: Number of args
 *@argv: Value
 *
 * Return: Zero on success and 1 if there are no two args
 */

int main(int argc, char *argv[])
{
	int num1, num2, prod;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	prod = num1 * num2;

	printf("%d\n", prod);

	return (0);
}
