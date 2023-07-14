#include <stdio.h>

/**
 * main - Entry point function and print lowercase alphabet
 *	using putchar in reverse order.
 *
 * Return: 0 (always success)
 */

int main(void)
{
	char a = 122;

	while (a > 96)
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
