#include "main.h"

/**
 * more_numbers - 9 times table.
 *
 * Return:  void.
 *
 */
void more_numbers(void)
{
int i;
int x;
int y;
for (i = 0; i <= 9; i++)
{
for (x = 0; x <= 14; x++)
{
y = x;
if (x > 9)
{
_putchar(1 + '0');
y = x % 10;
}
_putchar(y + '0');
}
_putchar('\n');
}
return;
}
