#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 */

void jack_bauer(void)
{
	int a = 0, b = 0, c = 0, d = 0;

	a = 0;
	while (a < 3)
	{
		b = 0;
		while (b <= 9)
		{
			c = 0;
			while (c < 6)
			{
				d = 0;
				while (d <= 9)
				{
					if (a == 2 && b >= 4)
					{
						break;
					}
					_putchar (a + '0');
					_putchar (b + '0');
					_putchar (':');
					_putchar (c + '0');
					_putchar (d + '0');
					_putchar ('\n');
					d++;
				}
				c++;
			}
		b++;
		}
	a++;
	}
}

