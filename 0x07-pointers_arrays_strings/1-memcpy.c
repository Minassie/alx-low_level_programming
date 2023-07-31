#include "main.h"

/**
 * *_memcpy - copies memory area
 *
 * @dest: the destination address
 * @src: the constant byte
 * @n: the number of first bytes to be copied
 *
 * Return: a pointer to the dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
