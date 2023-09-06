#include "main.h"
/**
 * alloc_grid - a function  that returns a pointer to 2d array of int,
 * @width: number of array coloms
 * @height: number of arrays rows
 * Return: pointer to the array.
 *
 */
int **alloc_grid(int width, int height)
{
int **r;
int i, j;
if (width <= 0 || height <= 0)
{
return (NULL);
}
r = malloc(height * sizeof(int *));
if (r == 0)
{
return (0);
}
for (i = 0; i < height; i++)
{
r[i] = malloc(width * sizeof(int **));
if (r[i] == 0)
{
for (j = 0; j < i; j++)
{
free(r[j]);
}
free(r);
return (NULL);
}
for (j = 0; j < width; j++)
{
r[i][j] = 0;
}
}
return (r);
}
