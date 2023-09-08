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
if (min > max)
{
return (NULL);
}
r = malloc(sizeof(int) * (max - min + 1));
if (r == 0)
{
return (0);
}
for (i = 0; i <= max - min; i++)
{
r[i] = min++;
}
return (r);
}
