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
		putchar (',');
		putchar (' ');
	}
	
	putchar ('\n');
	return (0);
}
