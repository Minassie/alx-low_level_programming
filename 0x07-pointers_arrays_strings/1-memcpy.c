#include "main.h"

/**
 * _memcpy - Copies n bytes from memory area src to memory area dest.
 * @dest: A pointer to the destination array where the content is to be copied.
 * @src: This is pointer to the source of data to be copied.
 * @n: The number of bytes to be copied.
 *
 * Return: A pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i, k = n + 1;

	for (i = 0; i <= k; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
