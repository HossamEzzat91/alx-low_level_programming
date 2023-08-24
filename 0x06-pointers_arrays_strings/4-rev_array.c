#include "main.h"
/**
 * reverse_array -  function that reverses the content of an array of integers.
 * @a: pointer array of int
 * @n: array dimention
 * Return: void
 */
void reverse_array(int *a, int n)
{
int l, i, j;

for (i = 0, j = n - 1; i < j; i++, j--)
{
l = a[i];
a[i] = a[j];
a[j] = l;
}
}
