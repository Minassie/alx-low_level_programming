/**
 * _islower - checks the letter whether it is lower case
 * @c: The character is to be checked
 *
 * Return: 1 if lowercase and 0 otherwise
 */
#include "main.h"

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
