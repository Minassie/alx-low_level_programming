/**
 * main - project to make different combination of three digits
 *
 * Return: 0
 */

#include <stdio.h>

int main(void)
{

	int a;
	int b;
	int c;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = '0'; c <= '9'; c++)
			{
				if ((a < b) && (b < c))
				{
					putchar (a);
					putchar (b);
					putchar (c);
					if (a == '7' && b == '8' && c == '9')
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
	return (0);
}
