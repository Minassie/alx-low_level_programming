#include "main.h"

/**
 * print_alphabet_x10 - print small letter alphabet ten times
 *
 * Return: 0 on success
 */

void print_alphabet_x10(void)
{
	char b, a;

	b = 0;
	while (b < 10)
	{
	a = 97;
	while (a < 123)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
	b++;
	}
}
