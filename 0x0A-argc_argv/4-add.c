#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that adds positive numbers
 * @argc: Counts the number of arguments given to the program
 * @argv: An array of pointers tothe arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, k, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (k = 0; i < argv[i][k]; k++)
		{
			if (argv[i][k] > '9' || argv[i][k] < '0')
			{
				printf("Error\n");
				return (1);
			}

		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
