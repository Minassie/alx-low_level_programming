#include "main.h"

/**
 * print_rev - prints a the reversed string
 * @str: the string to be printed
 *
 */
void print_rev(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
		i++;
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
