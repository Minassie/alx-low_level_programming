#include "main.h"

/**
 * _puts - a functions that prints strings
 * @str: takes the string constants
 */

void _puts(char *str)
{
	do {
		_putchar(*str++);
	} while (*str != '\0');

	_putchar('\n');
}
