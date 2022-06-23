#include "main.h"

/**
 * _puts_recusrion - a function that prints a string.
 * @s: the string to be printed.
 *
 * Return: nothing.
 */
char _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
