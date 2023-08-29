#include "main.h"
/**
 * print_diagsums - print 2 dimentiosn array
 * @a: 2 dimentions array
 * @size: arrays size
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int i, x = 0, y = 0;
for (i = 0; i < size; i++)
{
x += a[i];
y += a[size - i - 1];
a += size;
}
printf("%d, %d\n", x, y);
}
