#include "main.h"
/**
 * fizz_buzz - Entry point
 *
 * Return: Always 0 (Success)
 */
void fizz_buzz(void)
{
int i;
for (i = 1; i < 100; i++)
{
if (i % 3 != 0 && i % 5 != 0)
{
printf("%d ", i);
}
else
{
if (i % 3 == 0)
{
printf("Fizz");
}
if (i % 5 == 0)
{
printf("Buzz");
}
printf(" ");
}
}
printf("\n");
}
