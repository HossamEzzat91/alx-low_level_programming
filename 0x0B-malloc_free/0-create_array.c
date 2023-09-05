#include "main.h"

/**
 * create_array - a function that creates an array of chars,
 * @c: The character to print
 * @size: size of the array
 * Return: pointer to the array.
 *
 */
char *create_array(unsigned int size, char c)
{
char *r = malloc(size);
unsigned int i;
if (size == 0 || r == 0)
{
return (0);
}
for (i = 0; i < size; i++)
{
r[i] = c;
}
return (r);
}
