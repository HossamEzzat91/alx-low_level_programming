#include "main.h"
/**
 * print_array - function that prints every other character of a string
 * @a: pointer of type char
 * @n:array dim
 * Return: void
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
if (i != (n - 1))
{
printf("%d, ", a[i]);
}
else
{
printf("%d", a[i]);
}
}
printf("\n");
}
