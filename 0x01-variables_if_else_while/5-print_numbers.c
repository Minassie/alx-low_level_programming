#include <stdio.h>

/**
 * main - Entry point function and print single digit numbers
 *
 *
 * Return: 0 (always success)
 */

int main(void)
{
	char a = 0;

	while (a < 10)
	{
		putchar(a + '0');
		a++;
	}
	putchar('\n');
	return (0);
}
