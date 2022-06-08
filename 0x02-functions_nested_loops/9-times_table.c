#include "main.h"

/**
 * times_table - times table of 9
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int i, j, l;

	for (i = 0; i <= 9; i++)
	{
		_putchar ('0');
		for (j = 1; j <= 0; j++)
		{
			_putchar (',');
			_putchar (' ');
			l = i * j;
			if (l <= 9)
				_putchar (' ');
			else
				_putchar ((l / 10) + '0');
			_putchar ((l % 10) + '0');
		}
		_putchar ('\n');
	}
}
