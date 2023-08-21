#include "main.h"
/**
 * print_times_table - 9 times table.
 * Return:  void.
 * @n : give n time table
 */
void print_times_table(int n)
{
int i;
int x;
int y;
if (n > 0 &&  n < 15)
{
for (i = 0; i <= n; i++)
{
for (x = 0; x <= n; x++)
{
y = i * x;
_putchar(',');
_putchar(' ');
if (y >= 10 && y < 100 && x != 0)
{
_putchar(' ');
_putchar((y / 10) + '0');
_putchar((y % 10) + '0');
}
else if (y >= 100 && x != 0)
{
_putchar((y / 100) + '0');
_putchar(((y / 10) % 10) + '0');
_putchar((y % 10) + '0');
}
else if (x == 0)
{
_putchar(y + '0');
}
else if (x != 0)
{
_putchar(' ');
_putchar(' ');
_putchar(y + '0');
}
}
_putchar('\n');
}
}
}
