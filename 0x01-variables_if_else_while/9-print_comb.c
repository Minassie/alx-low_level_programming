/**
 * main - print all single-digit numbers followed by comma and space
 *
 * Return: 0
 */

#include <stdio.h>

int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar (a);
	if (a == '9')
	{
	putchar ('\n');
	}
	else
	{
		putchar (',');
		putchar (' ');
	}
	}
	return (0);
}
