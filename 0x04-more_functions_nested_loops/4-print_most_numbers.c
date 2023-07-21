#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9 except 2 and 4
 *
 * Return: nothing
 */

void print_most_numbers(void)
{
	int a;

	a = 0;
	while (a < 10)
	{
		if (a == 2 || a == 4)
		{
			a++;
			continue;
		}
		_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}
