#include <stdio.h>

/**
 * main - Entry point function and print all the numbers of
 *	base 16 in lowercase
 *
 * Return: 0 (always success)
 */

int main(void)
{
	int a = 0;

	while (a <= 9)
	{
		putchar(a + '0');
		if (a == 9)
		{
			break;
		}
			putchar(',');
			putchar(' ');
		a++;
	}
	putchar('\n');
	return (0);
}
