#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints upto 98 either way
 * @n: recives the digit
 *
 * Return 0:
 */

void print_to_98(int n)

{
	int y;

	if (n > 98)
	{
		printf("%d,", n);
		for (y = n + 1; y > 98; y--)
			printf(" %d,", y);
		printf(" 98");
	}
	else
	{
		printf("%d,", n);
		for (y = n + 1; y < 98; y++)
			printf(" %d,", y);
		printf(" 98");
	}
}
