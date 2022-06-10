#include "main.h"

/**
 * print_diagonal - prints diagonals
 * @n: takes numbers
 */

void print_diagonal(int n)
{
	int a, b;

	for (b = 0; b < n; b++)
	{
		for (a = 0; a < b; a++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		if (b == n - 1)
		{
			continue;
		}
		_putchar('\n');
	}
	_putchar('\n');
}
