#include"main.h"
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
long y = 2;
int x = 1;
long prev = 0;
long temp = 0;
long sum = 0;
while (x <= 50)
{
temp = y;
y = y + prev;
prev = temp;
if ( y % 2 == 0 && sum <= 4000000)
{   
sum = sum + y;
printf("%ld", sum);
}
x++;
if (sum <= 4000000)
{
printf(", ");
}
else
{
break;
}
}
printf("\n");
return (0);
}

