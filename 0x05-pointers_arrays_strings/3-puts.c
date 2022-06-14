#include "main.h"

/**
 * _puts - a functions that prints strings
 * @str: takes the string constants
 */

void _puts(char *str)
{
	do {
		_putchar(*str++);
	} while (*str);

	_putchar('\n');
}
