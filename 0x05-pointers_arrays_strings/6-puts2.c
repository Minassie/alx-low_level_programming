/**
 * puts2 - prints every other character of a string, starting with
 * the first character
 *
 * @str: string to be accepted
 */

#include "main.h"

void puts2(char *str)
{
	int a;

	a = 0;
	while (*(str + a))
	{
	if (a % 2 == 0)
	{
		_putchar(*(str + a));
	}
		a++;
	}
	_putchar('\n');
}
