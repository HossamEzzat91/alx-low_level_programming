#include "main.h"

/**
 * _islower - check char.
 *
 * Return:  1 if lower case.
 * Return: 0 otherwise
 */
int _islower(int c)
{
if ( islower(c))
{
_putchar('1');
return(1);
}
else
{
_puthcar('0');
return(0);
}
}
