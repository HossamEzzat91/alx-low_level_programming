#include "main.h"

/**
 * _print_sign - check char.
 *
 * Return:  1 if positive.
 *  @n: The number to check
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
return (-1);
_putchar('-');
}
}
