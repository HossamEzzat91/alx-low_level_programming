#include"main.h"
/**
 * print_diagonal -print from 0-9
 *@n: is the number of time char '_' print
 *
 * Return: void.
 */
void print_diagonal(int n)
{
int x;
int i;
char c = '\\';
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= n; i++)
{
for (x = 1; x < i ; x++)
{
_putchar(' ');
}
_putchar(c);
_putchar('\n');
}
}
return;
}





