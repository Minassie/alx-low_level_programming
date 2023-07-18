#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: the number given
 *
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int k;

	if (n < 0)
	k = n * -1;
	else
		k = n;
	_putchar(k % 10 + '0');
	return (k % 10);
}
