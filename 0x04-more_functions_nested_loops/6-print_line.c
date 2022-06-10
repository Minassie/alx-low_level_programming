#include "main.h"

/**
 * print_line - the funtion prints underscort for given amount
 * @n: specifies the amount
 */

void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
		_putchar('_');
	_putchar('\n');
}
