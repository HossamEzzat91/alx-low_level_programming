#include "main.h"

/**
 * times_table - 9 times table.
 *
 * Return:  void.
 *
 */
void times_table(void)
{
int i;
int x;
int y;
for (i = 0; i <= 9; i++)
{
for (x = 0; x <= 9; x++)
{
y = i * x;
if (x != 0)
{
_putchar(',');
_putchar(' ');
}
if (y >= 10)
{
_putchar((y / 10) + '0');
_putchar((y % 10) + '0');
}
else if (x == 0)
{
_putchar(y + '0');
}
else
{
_putchar(' ');
_putchar(y + '0');
}
}
_putchar('\n');
}
return;
}
