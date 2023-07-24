#include "main.h"

/**
 * print_rev - prints a the reversed string
 * @str: the string to be printed
 *
 */

void print_rev(char *str)
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
