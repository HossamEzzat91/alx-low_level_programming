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
for (i = 0; i <= 9; i++)
{
_putchar('\n');  
for (x = 0; x <= 14; x++)
{

if (x >= 10)
{
_putchar((x / 10) + '0');
_putchar((x % 10) + '0');
}
else
{
_putchar(x + '0');
}
}
_putchar('\n');
}
return;
}
