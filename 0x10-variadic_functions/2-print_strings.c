#include "variadic_functions.h"
/**
 * print_strings- print numbers
 * @n: number of parameters pass the function
 * @separator:string to be printed between the numbers
 * Return: nothing
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int x;
va_list argptr;
char *s;
va_start(argptr, n);
for (x = 0; x < n; x++)
{
s = va_arg(argptr, char*);
if (s != NULL)
{
printf("%s", s);
}
else
{
printf("nil");
}
if (x < n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(argptr);
}
