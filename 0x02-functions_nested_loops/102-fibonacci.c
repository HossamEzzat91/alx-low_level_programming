#include"main.h"
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
long y = 1;
int x = 1;
long prev = 0;
long temp = 0;
while (x <= 50)
{
temp = y;
y = y + prev;
prev = temp;
printf("%ld", y);
x++;
if (x < 50)
{
printf(", ");
}
}
printf("\n");
return (0);
}
