#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the number to be tested
 *
 * Return: 1 if the number is greater than 0
 * or -1 if the number is less than 0 otherwise 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	else
	{
		_putchar ('0');
		return (0);
	}
}
