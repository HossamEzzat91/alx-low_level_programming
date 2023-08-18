#include"main.h"
/**
 * print_line -print from 0-9
 *write characters in lowercase
 *
 * Return: void.
 */
void print_line(int n)
{
char c = '_';
for (i = 0; i <= n; i++)
{
if ( n <= 0)
{
_putchar('\n');
}
_putchar(c);
}
_putchar('\n');
return;
}
