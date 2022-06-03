/**
 * main - small letters
 *
 * Return: 0
 */

#include <stdio.h>

int main(void)
{
	int a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	return (0);
}
