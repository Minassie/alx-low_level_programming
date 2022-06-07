/**
 * print_alphabet_x10(void) - function that prints 10x the lowercase letters
 *
 * Return: Always 0.
 */
#include "main.h"

void print_alphabet_x10(void)
{
	int i, a;

	for (i = 0; i < 10; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
	_putchar('\n');
	}
}
