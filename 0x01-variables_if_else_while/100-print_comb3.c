#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ix;
int n;
for (n = 0 ; n<= 9 ; n++)
{   
for (ix = 0 ; ix <= 9 ; ix++)
{
putchar(n + '0');
putchar(ix + '0'); 
if (ix != 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
