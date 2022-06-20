#include "main.h"
/**
 * _memset - A function that fills memory with a constant byte
 * @s: the memory area to be filled
 * @n: the number of the first bytes to be filled.
 * @b: the constant byte to be filled
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char tmp[1000];
	int i, j, k = n;

	for (i = 0; s[i]; i++)
	{
		*(tmp + i) = *(s + i);
	}
	for (i = 0; i < k; i++)
	{
		*(tmp + i) = b;
	}

	i = 0;
	j = 0;
	while (tmp[i])
	{
		*(s + j) = *(tmp + i);
		i++;
		j++;
	}
	return (s);
}
