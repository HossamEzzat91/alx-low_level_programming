#include "main.h"
/**
 * _pow_recursion - return value of x rasied to power y
 * @x: agiven number
 * @y:power value
 *  Return: x power n
 */
int _pow_recursion(int x, int y)
{
int i = x;
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
{
i *= _pow_recursion(x, y - 1);
}
return (i);
}
