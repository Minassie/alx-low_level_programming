#include <stdio.h>

/**
 * main - Entry point function and print lowercase alphabet
 *	using putchar except q and e.
 *
 * Return: 0 (always success)
 */

int main(void)
{
	char a = 96;

	while (a < 122)
	{
		a++;
		if  (a == 'q' || a == 'e')
		{
			continue;
		}
		putchar(a);
	}
	putchar('\n');
	return (0);
}
