/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * @str: the string to be printed
 */

#include "main.h"

void puts_half(char *str)
{
	int a, n;

	a = 0;

	while (*(str + a))
	{
		a++;
	}
	n = (a - 1) / 2;
	if (a % 2 != 0)
	{
		for (a = 0; a <= n; a++)
		{
		_putchar(*(str + a));
		}
	}
	else
	{
		a = n + 1;
		while (*(str + a))
		{
		_putchar(*(str + a));
		a++;
		}
	}
	_putchar('\n');
}
