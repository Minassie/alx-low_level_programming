/**
 * print_numbers - prints digits
 */

#include "main.h"

void print_numbers(void)
{
	char a;

	for (a = 0; a <= 9; a++)
		_putchar(a + '0');

	_putchar('\n');
}
