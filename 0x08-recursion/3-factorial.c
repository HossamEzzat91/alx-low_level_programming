#include "main.h"
/**
 * factorial- return afactorial of agiven num
 * @n: agiven number
 * Return: the factroial of n
 */
int factorial(int n)
{
int i = n;
if (n < 0)
{
return (-1);
}  
else if (0 < n < 1)
{
return (1);
}
else
{   
i *= factorial(n - 1);
}
return (i);
}
