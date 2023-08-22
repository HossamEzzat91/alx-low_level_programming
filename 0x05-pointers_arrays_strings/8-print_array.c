#include "main.h"
/**
 * print_array - function that prints every other character of a string
 * @a: pointer of type char
 * @n:array dim
 * Return: void
 */
void print_array(int *a, int n)
{
int i = 0;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != 0 && i < n - 1)
{
printf(", ");  
}
}
_putchar('\n');
}
