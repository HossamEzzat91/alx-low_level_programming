#include"main.h"
/**
 * print_squar -print from 0-9
 *@size: is the number of time char '_' print
 *
 * Return: void.
 */
void print_square(int size)
{
int x;
int i;
char c = '#';
if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= size; i++)
{
for (x = 1; x <= size ; x++)
{
_putchar(c);
}
_putchar('\n');
}
}
return;
}




