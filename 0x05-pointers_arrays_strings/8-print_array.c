#include "main.h"
/**
 * puts_half - function that prints every other character of a string
 * @str: pointer of type char
 * Return: void
 */
void print_array(int *a, int n)
{
int i = 0;

for (i = 0 ;i <= n; i++)
{
printf('%d', a[i]);
if (i != n)
{
printf(", ");  
}
}
_putchar('\n');
}
