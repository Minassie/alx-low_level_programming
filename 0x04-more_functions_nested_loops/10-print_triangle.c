#include "main.h"

/**
 * print_triangle - prints trinagle of # for given size
 * @size: the variable that takes the size value
 */

void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (b = size; b > 0; b--)
	{
		for (c = 0; c < b; c++)
		{
			_putchar(' ');
		}
		for (a = 0; a <= size - c; a++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	}
}
