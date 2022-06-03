/**
 * main - print small letters except e and q followed by new line
 *
 * Return: 0
 */
#include <stdio.h>

int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if ((a != 'e') && (a != 'q'))
		{
		putchar(a);
		}
	}
	putchar('\n');
	return (0);
}
