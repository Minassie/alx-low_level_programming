#include "main.h"

/**
 * rev_string - It reverses the given string.
 * @s: the values to be reversed.
 */

void rev_string(char *s)
{
	char tmp[10];
	int a = 0, b = 0;

	while (*(s + a))
	{
	*(tmp + a) = *(s + a);
	a++;
	}

	a = a - 1;

	while (a >= 0)
	{
	*(s + b) = *(tmp + a);
	a--;
	b++;
	}
}
