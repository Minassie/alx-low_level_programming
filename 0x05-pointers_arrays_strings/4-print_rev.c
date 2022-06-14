#include "main.h"

/**
 * print_rev - prints the given string in the reverse order
 * @s: the values to be printed.
 */

void print_rev(char *s)
{
	int a = 0;

	while (*(s + a))
		a++;

	for (a = a - 1; a >= 0; a--)
		_putchar(*(s + a));

	_putchar('\n');
}
