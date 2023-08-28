#include"main.h"
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
long y = 1;
long prev = 0;
long temp = 0;
long sum = 0;
while (1)
{
temp = y;
y = y + prev;
prev = temp;
if (y > 4000000)
{
break;
}
if (y % 2 == 0)
{
sum = sum + y;
}
}
printf("%ld", sum);
printf("\n");
return (0);
}
