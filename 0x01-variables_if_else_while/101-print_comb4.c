#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int i;
int x;
for (x = 0 ; x <= 7 ; x++)
{
for (n = 0 ; n <= 8 ; n++)
{
if (n <= x)
{
n = x + 1;
}
for (i = 0 ; i <= 9 ; i++)
{
if (i <= n)
{
i = n + 1;
}
putchar(x + '0');
putchar(n + '0');
putchar(i + '0');
if (i <= 9 && n <= 8 && x != 7)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
