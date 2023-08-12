#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ix;
 for (ix = '0' ; ix <= '9' ; ix++)
{
putchar(ix);
}
for (ix = 'a' ; ix <= 'f' ; ix++)
{
putchar(ix);
}
 
putchar('\n');
return (0);
}

