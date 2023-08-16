#include"main.h"
/**
 * print_alphabet_x10-lowercase character
 *write characters in lowercase 10 times
 *
 * Return: void.
 */
void print_alphabet_x10(void)
{
char i;
int x = 0;
while (x < 10)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
x++;
}
_putchar('\n');
return;
}

