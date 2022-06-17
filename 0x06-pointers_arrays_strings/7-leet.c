#include "main.h"
/**
 * leet - This function encodes a string to 1337.
 * @str: the string to be encoded.
 * Return: the encoded string to the pointer.
 */
char *leet(char *str)
{
	int i, j;

	char a[] = "aeotlAEOTIL";
	char b[] = "43071";

	for (i = 0; *(str + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[j] == *(str + i))
				*(str + i) = b[j];
		}
	}
	return (str);
}
