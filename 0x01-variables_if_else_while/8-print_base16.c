/**
 * main - Print numbers of base 16 in lowercase
 *
 * Return: 0
 */

#include <stdio.h>

int main(void)
{
	int a;
	int num;

	for (num = 0; num < 10; num++)
		putchar (num + '0');

	for (a = 'a'; a <= 'f'; a++)
		putchar (a);

	putchar ('\n');
	return (0);
}
