#include "main.h"

/**
 * _memcpy - Copies n bytes from memory area src to memory area dest.
 * @dest: A pointer to the destination array where the content is to be copied.
 * @src: This is pointer to the source of data to be copied.
 * @n: The number of bytes to be copied.
 *
 * Return: A pointer to dest.
 */

void *_memcpy(void *dest, const void *src, unsigned int n)
{
	unsigned int i;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (i = 0; i <= n; i++)
	{
		*(destination + i) = *(source + i);
	}
	return (dest);
}
