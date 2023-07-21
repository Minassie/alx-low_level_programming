#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @n: tell the number of times the character _ should be printed
 * Return: nothing
 */

void print_line(int n)
{
	char a;

	if (n > 0)
	{
		a = 0;
		while (a < n)
		{
			_putchar('_');
			a++;
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
