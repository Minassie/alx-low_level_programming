#include "main.h"
/**
 * reverse_array - this functions reverses the given array
 * @a: an array of integers to be reversed
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i = 0, tmp;

	n = n - 1;
	while (i < n)
	{
		tmp = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = tmp;
		i++;
		n--;
	}
}
