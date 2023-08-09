#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and
 * @size: The size of the array to be initialized.
 * @c: The specific char to intialize the array with.
 * Return: If size == 0 or the function fails - NULL otherwise pointer.
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int ind;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (ind = 0; ind < size; ind++)
		arr[ind] = c;

	return (arr);
}
