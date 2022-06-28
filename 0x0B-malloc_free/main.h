#include <stddef.h>
/**
 * This file contains the prototypes of all the functions used in this project.
 *
 */
int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void fee_grid(int **grid, int height);
