#include "main.h"
/**
 * free_grid - a function  that free 2d array of int,
 * @grid: pointer of th array
 * @height: number of arrays rows
 * Return: nothing
 *
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
