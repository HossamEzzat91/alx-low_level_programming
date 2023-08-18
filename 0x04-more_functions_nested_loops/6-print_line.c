#include"main.h"
/**
 * print_line -print from 0-9
 *@n: is the number of time char '_' print
 *
 * Return: void.
 */
void print_line(int n)
{
int i;
char c = '_';
if ( n <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= n; i++)
{
_putchar(c);
}

_putchar('\n');
}
return;
}
