#include <stdio.h>

/**
 * main - Entry point function and print alphabet
 *	using putchar.
 *
 * Return: 0 (always success)
 */

int main(void)
{
	char a = 97;
	char A = 65;
	while (a < 123)
	{
		putchar(a);
		a++;
	}
	while (A < 91)
	{
		putchar(A);
		A++;
	}
	putchar('\n');
	return (0);
}
