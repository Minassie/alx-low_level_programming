/**
 * main - project to make different combination of four digits and space
 *
 * Return: 0
 */

#include <stdio.h>

int main(void)
{

	int a;
	int b;
	int c;
	int d;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = '0'; c <= '9'; c++)
			{
				for (d = '0'; d <= '9'; d++)
				{
					if ((a < b) && (b < c))
					{
						putchar (a);
						putchar (b);
						putchar (' ');
						putchar (c);
						putchar (d);
					if (a == '9' && b == '8' && c == '9' && d == '9')
					{
						putchar ('\n');
					}
					else
					{
						putchar (',');
						putchar (' ');
					}
					}
				}
			}
		}
	}
	return (0);
}
