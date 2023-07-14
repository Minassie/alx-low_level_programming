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
	while (a < 9)
	{
		putchar(a + '0');
		putchar(',');
		putchar(' ');
		a++;
	}
	putchar('9');
	putchar('\n');
	return (0);
}
