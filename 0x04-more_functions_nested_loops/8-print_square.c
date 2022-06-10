#include "main.h"

/**
 * print_square - prints square of # for given size
 * @size - the variable that takes the size value
 */

void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar('#');
		}
		if (a == size - 1)
		{
			continue;
		}
		_putchar('\n');
	}
	}
}
