#include "main.h"
/**
 * array_range - a function  that create array of int,
 * @min: min number in the array
 * @max: max number in the array
 * Return: pointer to the array.
 *
 */
int *array_range(int min, int max)
{
int *r;
int i;
int len;
if (min > max)
{
return (NULL);
}
len = max - min + 1;
r = malloc(sizeof(int) * len);
if (r == 0)
{
return (0);
}
for (i = 0; i < len; i++)
{
r[i] = min + 1;
}
return (r);
}
