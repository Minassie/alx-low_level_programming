#include "main.h"

/**
 * div - Checks divisiblty of a number
 * @b: The number to be checked.
 * @a: The divisor.
 *
 * Return: 0 if the number is divisible, else 1.
 */
int div(int b, int a)
{
	if (b % a == 0)
		return (0);
	if (a == b / 2)
		return (1);

	return (div(b, a + 1));
}


/**
 * is_prime_number - a function that returns 1 if the number is prime.
 * @n: the given number
 *
 * Return: 0 if number is not prime, else 1.
 */
int is_prime_number(int n)
{
	int a = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	return (div(b, a));
}
