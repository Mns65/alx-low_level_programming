#include "main.h"

/**
 * swap_int - Swaps the value of a with b.
 *@a: The 1st argument
 *@b: The 2nd argument
 *
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
