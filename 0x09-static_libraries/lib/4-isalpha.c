/**
 * _isalpha - checks the letter whether it is alphabet letter
 * @c: The character is to be checked
 *
 * Return: 1 if alphabet and 0 otherwise
 */

#include "main.h"

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
