#include"main.h"
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long y = 1;
int x = 1;
unsigned long prev = 0;
unsigned long temp = 0;
while (x <= 98)
{
temp = y;
y = y + prev;
prev = temp;
printf("%lu", y);
x++;
if (x <= 98)
{
printf(", ");
}
}
printf("\n");
return (0);
}
