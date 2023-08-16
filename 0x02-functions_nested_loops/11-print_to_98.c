#include "main.h"

/**
 * times_table - 9 times table.
 *
 * Return:  void.
 *
 */
void print_to_98(int n)
{
int i;
for (i = n; i <= 98; i++)
{
if (i < 98)
{
_putchar(',');
_putchar(' ');
}
if (i >= 10)
{
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
}
else
{
_putchar(i + '0');
}
} 
return;
}
