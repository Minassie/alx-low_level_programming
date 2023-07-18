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

	k = n % 10;
	if (n < 0)
	{
		_putchar(-k + '0');
		return (-k);
	}
	else
	{
		_putchar(k + '0');
		return (k);
	}
}
