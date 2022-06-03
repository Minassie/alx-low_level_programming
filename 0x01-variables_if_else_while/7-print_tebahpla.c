/**
 * main - Print reversed lowercase alphabet
 *
 * Return: 0
 */

#include <stdio.h>

int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
	{
	putchar (a);
	}
	putchar ('\n');
	return (0);
}
