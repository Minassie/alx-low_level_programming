#include "main.h"

/**
 * _puts - prints a string
 * @str: the string to be printed
 *
 */

void _puts(char *str)
{
	int i, n;

	for (i = 0; str[i] != '\0'; i++)
		n = i;
	for (n = i; n >= 0; n--)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
