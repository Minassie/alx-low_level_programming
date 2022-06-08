/**
 * _abs - computes the absolute value of an integer
 * @j: The character is to be checked
 *
 * Return: 0
 */

#include "main.h"

int _abs(int j)
{

	if ('j' >= 0)
	{
		_putchar (j);
	}
	else
	{
		j = 'j' * -1;
		_putchar (j);
	}
		return (0);
}
