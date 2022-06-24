#include "main.h"

/**
 * _puts - a functions that prints strings
 * @str: takes the string constants
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
