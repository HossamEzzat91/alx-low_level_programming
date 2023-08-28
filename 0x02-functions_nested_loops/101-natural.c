#include"main.h"
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
int y = 0;
int x = 0;
while (x < 1024)
{
if (x % 3 == 0 || x % 5 == 0)
{
y = y + x;
}
x++;
}
printf("%d\n", y);
return (0);
}
