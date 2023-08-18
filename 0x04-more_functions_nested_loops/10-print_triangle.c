#include"main.h"
/**
 * print_triangle -print from 0-9
 *@size: the size of the triangle
 *
 * Return: void.
 */
void print_triangle(int size)
{
int x;
int i;
int y;
char c = '#';
if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= size; i++)
{
for (x = size; x > i ; x--)
{
_putchar(' ');
}
for (y = 1; y <= i; y++)
{
_putchar(c);
}
_putchar('\n');
}
}
}
