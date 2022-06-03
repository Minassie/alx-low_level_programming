/**
 * main - alphABET
 *
 * Return: 0
 */
#include <stdio.h>
int main(void)
{
	int a = 'a';
	int A = 'A';

	while (a <= 'z')
		{
		putchar(a);
		a++;
		}
	while (A <= 'Z')
		{
		putchar(A);
		A++;
		}
		putchar('\n');
	return (0);
}
