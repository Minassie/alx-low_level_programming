#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: the first character
 * @b: the second character
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
