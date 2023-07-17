#include <stdio.h>

/**
 * main - Entry point function and a program that prints all
 *	possible combinations of single-digit numbers
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
