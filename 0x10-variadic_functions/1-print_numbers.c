#include "variadic_functions.h"
/**
 * print_numbers- print numbers
 * @n: number of parameters pass the function
 * @separator:string to be printed between the numbers
 * Return: nothing
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int x;
va_list argptr;
va_start(argptr, n);
for (x = 0; x < n; x++)
{
printf("%d", va_arg(argptr, int));
if (x < n - 1 && separator != Null)
{
printf("%s", separator);
}
}
printf("\n");
va_end(argptr);
}
