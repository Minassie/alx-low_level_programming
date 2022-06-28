#include "main.h"
/**
 * create_array - a function that creates an array of chars
 * @size: the size of chars
 * @c: the char
 * Return: NULL if size = 0 or pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	int i;

	s = malloc((size + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
