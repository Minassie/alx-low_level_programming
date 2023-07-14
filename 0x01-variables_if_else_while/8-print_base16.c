#include <stdio.h>

/**
 * main - Entry point function and print all the numbers of
 *	base 16 in lowercase
 *
 * Return: 0 (always success)
 */

int main(void)
{
	char a = 0;
	char A = 97;

	while (a <= 9)
	{
		putchar(a + '0');
		a++;
	}
	while (A < 103)
	{
		putchar(A);
		A++;
	}
	putchar('\n');
	return (0);
}
