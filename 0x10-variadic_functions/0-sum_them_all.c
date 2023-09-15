#include "variadic_functions.h"
/**
 * sum_them_all- add all its parameters
 * @array: pointer to anme 
 * Return: void.
 *
 */
int sum_them_all(const unsigned int n, ...)
{
int x;
int sum = 0;
va_list argptr;
if (n == 0)
{
return (0);
}
va_start(argptr, n);
for (x = 0; x < n; x++)
{
sum += va_arg(int, argptr);
}
va_end(argptr);
return (sum);
}
