#include <stdio.h>

/**
 * main - Entry point function and print lowercase alphabet
 *	using putchar.
 *
 * Return: 0 (always success)
 */

int main(void)
{
	char a = 97;

	while (a < 123)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
