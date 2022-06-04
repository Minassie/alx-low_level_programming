/**
 * main - project to make different combination of two digits
 *
 * Return: 0
 */

#include <stdio.h>

int main(void)
{

	int a;
	int b;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			if (a < b)
			{
				putchar (a);
				putchar (b);
				if (a == '8' && b == '9')
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
	return (0);
}
