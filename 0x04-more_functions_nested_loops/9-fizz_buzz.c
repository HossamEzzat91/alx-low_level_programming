#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 1; i < 100;i++)
{
if (i % 3 !=0)
{

printf("%d ", i);
}
else
{
printf("Fizz Buzz ");
}
}
printf("\n");
return(0);
}
