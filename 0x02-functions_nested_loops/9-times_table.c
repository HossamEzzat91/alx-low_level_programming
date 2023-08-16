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
y = i * x ;  
_putchar(y + '0');
if(i <= 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n'); 
}
return;
}
