#include "main.h"

/**
 * print_to_98- times table.
 *
 * Return:  void.
 * @n:tkae the entery num
 */
void print_to_98(int n)
{
int i;
if (n <= 98)
{
for (i = n ; i <= 98 ; i++)
{
if (i != 98)
{
printf("%d", i);
printf(", ");
}
else
{
printf("%d", i);
}
}
}
else
{
for (i = n ; i >= 98 ; i--)
{
if (i != 98)
{
printf("%d", i);
printf(", ");
}
else
{
printf("%d", i);
}
}
}
printf("\n");
return;
}
