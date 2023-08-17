#include "main.h"

/**
 * print_last_digit- check char.
 *
 * Return:  absloute value.
 *  @c: The character to check
 */
int print_last_digit(int c)
{
int lstdg;  
if (c < 0)
{
lstdg = -1* (c % 10);
}
else
{
lstdg = c % 10;
}
_putchar(lstdg + '0'); 
return (lstdg);
}





