#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ix;
for (ix = 0 ; ix <= 9 ; ix++)
{
putchar(ix + '0');
if (ix != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

