#include "main.h"

/**
 * factorial - Returns the factorial of number n
 *@n: The number n
 *
 * Return: The factorial
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
