/**
 * print_last_digit - prints the last digit of a number
 * @r: The character is to be checked
 *
 * Return: last digit
 */

#include "main.h"

int print_last_digit(int r)
{
	int x;
	x = r % 10;

	if (x < 0)
		x *= -1;

	_putchar (x + '0');
	
	return (x);
}
