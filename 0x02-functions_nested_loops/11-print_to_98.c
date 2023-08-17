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
if ( n <= 98)
{
for ( i = n ; i <= 98 ; i++)
{
if(i != 98)
{
printf("%d",i);
printf(", ");
}
}
}
else
{   
for ( i = n ; i >= 98 ; i--)
{
if(i != 98)
{
printf("%d",i);
printf(", ");
}
}
}
return;
}
