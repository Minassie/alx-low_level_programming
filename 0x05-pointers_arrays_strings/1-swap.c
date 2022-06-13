#include "main.h"

/**
 * swap_int - this function swap given values
 * @a: the first value to be swapped
 * @b: the second value to be swapped
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
