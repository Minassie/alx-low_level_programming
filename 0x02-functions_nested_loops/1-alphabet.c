#include "main.h"

/**
 * print_alphabet - print small letter alphabet
 *
 * Return: 0 on success
 */

void print_alphabet(void)
{
	char a;

	a = 97;
	while (a < 123)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
